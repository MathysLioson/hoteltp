#ifndef CHAMBRE_REPOSITORY_H
#define CHAMBRE_REPOSITORY_H

#include <vector>
#include <memory>
#include "ChambreEntity.h"
#include "DatabaseSession.h"  // Make sure DatabaseSession is properly defined elsewhere

class ChambreRepository {
public:
    explicit ChambreRepository(DatabaseSession& session);

    std::shared_ptr<ChambreEntity> findById(const UUID& id);
    std::vector<ChambreEntity> findAll();
    ChambreEntity save(const ChambreEntity& chambre);
    void deleteById(const UUID& id);

private:
    DatabaseSession& dbSession;
};

#endif // CHAMBRE_REPOSITORY_H
