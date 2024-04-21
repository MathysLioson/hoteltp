#include <iostream>
#include <vector>
#include <memory>
#include <pstore.h>
#include "ChambreEntity.h"
#include "ChambreRepository.h"

class ChambreService {
public:
    ChambreService(ChambreRepository& repo) : chambreRepository(repo) {}

    std::vector<ChambreEntity> getAllChambres() {
        return chambreRepository.findAll();
    }

    ChambreEntity getChambreById(const UUID& id) {
        auto chambreOpt = chambreRepository.findById(id);
        if (!chambreOpt) {
            throw std::runtime_error("ChambreNotFoundException");
        }
        return *chambreOpt;
    }

    ChambreEntity saveChambre(const ChambreEntity& chambreEntity) {
        return chambreRepository.save(chambreEntity);
    }

    ChambreEntity updateChambre(const ChambreEntity& chambreEntity) {
        return chambreRepository.save(chambreEntity);
    }

    void deleteChambre(const UUID& id) {
        chambreRepository.deleteById(id);
    }

private:
    ChambreRepository& chambreRepository;
};

int main() {
    DatabaseSession session; // Supposons une session de base de données
    ChambreRepository repo(session);
    ChambreService service(repo);

    // Exemple d'utilisation du service
    try {
        auto chambres = service.getAllChambres();
        for (const auto& chambre : chambres) {
            std::cout << "Chambre ID: " << chambre.getId() << std::endl;
        }

        auto chambre = service.getChambreById(UUID::generate());
        std::cout << "Chambre retrouvée: ID " << chambre.getId() << std::endl;

        // Ajouter, mettre à jour, supprimer des exemples ici
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
