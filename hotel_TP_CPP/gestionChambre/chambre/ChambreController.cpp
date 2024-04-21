#include <iostream>
#include "httplib.h"
#include "ChambreService.h"
#include "ChambreEntity.h"

class ChambreController {
public:
    ChambreController(ChambreService* service) : chambreService(service) {}

    void setupRoutes(httplib::Server& srv) {
        srv.Get("/chambres/hello", [&](const httplib::Request& req, httplib::Response& res) {
            res.set_content("Hello", "text/plain");
        });

        srv.Get("/chambres/", [&](const httplib::Request& req, httplib::Response& res) {
            auto chambres = chambreService->getAllChambres();
            // Convertir la liste des chambres en JSON ou format texte ici
            res.set_content("Liste des chambres", "text/plain");
        });

        srv.Get("/chambres/{id}", [&](const httplib::Request& req, httplib::Response& res) {
            try {
                auto chambre = chambreService->getChambreById(req.matches[1]);
                // Convertir la chambre en JSON ou format texte ici
                res.set_content("Détails de la chambre", "text/plain");
            } catch (const ChambreNotFoundException& e) {
                res.status = 404;
                res.set_content("Chambre non trouvée", "text/plain");
            }
        });

        srv.Post("/chambres/", [&](const httplib::Request& req, httplib::Response& res) {
            // Exemple: Lire les données du corps et créer une nouvelle chambre
            ChambreEntity chambre;
            chambreService->saveChambre(chambre);
            res.status = 201;
            res.set_content("Chambre créée", "text/plain");
        });

        srv.Put("/chambres/{id}", [&](const httplib::Request& req, httplib::Response& res) {
            // Exemple: Mettre à jour une chambre existante
            ChambreEntity chambre;
            chambreService->updateChambre(chambre);
            res.status = 200;
            res.set_content("Chambre mise à jour", "text/plain");
        });

        srv.Delete("/chambres/{id}", [&](const httplib::Request& req, httplib::Response& res) {
            chambreService->deleteChambre(req.matches[1]);
            res.status = 204;
            res.set_content("Chambre supprimée", "text/plain");
        });
    }

private:
    ChambreService* chambreService;
};

int main() {
    ChambreService service;
    ChambreController controller(&service);

    httplib::Server svr;
    controller.setupRoutes(svr);
    svr.listen("localhost", 8080);

    return 0;
}
