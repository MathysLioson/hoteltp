#include <vector>
#include <memory>
#include <pstore.h>
#include "ChambreEntity.h"
#include "DatabaseSession.h"

class ChambreRepository {
public:
    ChambreRepository(DatabaseSession& session) : dbSession(session) {}

    std::shared_ptr<ChambreEntity> findById(const UUID& id) {
        // Faire une requête pour trouver une chambre par son ID
        return dbSession.query<ChambreEntity>("SELECT * FROM chambres WHERE id = ?", id);
    }

    std::vector<ChambreEntity> findAll() {
        // Faire une requête pour trouver toutes les chambres
        return dbSession.queryAll<ChambreEntity>("SELECT * FROM chambres");
    }

    ChambreEntity save(const ChambreEntity& chambre) {
        // Faire une requête pour sauvegarder une chambre
        dbSession.execute("INSERT INTO chambres (id, categorie, prix, aNettoyer, effectifMaximum, etat) VALUES (?, ?, ?, ?, ?, ?)",
                          chambre.getId(), chambre.getCategorie(), chambre.getPrix(), chambre.isANettoyer(), chambre.getEffectifMaximum(), chambre.getEtat());
    }

    void deleteById(const UUID& id) {
        // Faire une requête pour supprimer une chambre par son ID
        dbSession.execute("DELETE FROM chambres WHERE id = ?", id);
    }

private:
    DatabaseSession& dbSession;
};
