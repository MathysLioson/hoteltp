package com.example.hoteljavafinal.gestionChambrev1.chambre;

import com.example.hoteljavafinal.gestionChambrev1.chambre.ChambreEntity;
import com.example.hoteljavafinal.gestionChambrev1.chambre.ChambreRepository;
import com.example.hoteljavafinal.gestionChambrev1.chambre.exceptions.ChambreNotFoundException;
import jakarta.transaction.Transactional;
import lombok.AllArgsConstructor;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.UUID;

@Service
@Transactional
@AllArgsConstructor
public class ChambreService {

    private ChambreRepository chambreRepository;
    public List<ChambreEntity> getAllChambres() {
        List<ChambreEntity> chambresEntities = chambreRepository.findAll();
        return chambresEntities;
    }
    public ChambreEntity getChambreById(UUID id) throws ChambreNotFoundException {
        ChambreEntity chambre = chambreRepository.findById(id).orElseThrow(() -> new ChambreNotFoundException());
        return chambre;
    }

    public ChambreEntity saveChambre(ChambreEntity chambreEntity) {
        ChambreEntity chambre = chambreRepository.save(chambreEntity);
        return chambre;
    }
    public ChambreEntity updateChambre(ChambreEntity chambreEntity) {
        ChambreEntity chambre = chambreRepository.save(chambreEntity);
        return chambre;
    }

    public void deleteChambre(UUID id) {
        chambreRepository.deleteById(id);
    }
}
