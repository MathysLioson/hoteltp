#ifndef CHAMBRE_SERVICE_H
#define CHAMBRE_SERVICE_H

#include <vector>
#include "ChambreEntity.h"
#include "ChambreRepository.h"

class ChambreService {
public:
    explicit ChambreService(ChambreRepository& repo);

    std::vector<ChambreEntity> getAllChambres();
    ChambreEntity getChambreById(const UUID& id);
    ChambreEntity saveChambre(const ChambreEntity& chambreEntity);
    ChambreEntity updateChambre(const ChambreEntity& chambreEntity);
    void deleteChambre(const UUID& id);

private:
    ChambreRepository& chambreRepository;
};

#endif // CHAMBRE_SERVICE_H
