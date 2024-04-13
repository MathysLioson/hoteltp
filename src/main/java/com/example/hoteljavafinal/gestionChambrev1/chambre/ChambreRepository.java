package com.example.hoteljavafinal.gestionChambrev1.chambre;

import com.example.hoteljavafinal.gestionChambrev1.chambre.ChambreEntity;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.UUID;

@Repository
public interface ChambreRepository extends JpaRepository<ChambreEntity, UUID> {

}
