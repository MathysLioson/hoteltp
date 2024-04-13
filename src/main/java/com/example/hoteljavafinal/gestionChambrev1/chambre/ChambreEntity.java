package com.example.hoteljavafinal.gestionChambrev1.chambre;

import jakarta.persistence.*;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.util.UUID;

@Entity
@Data
@NoArgsConstructor
@AllArgsConstructor
@Table(name = "chambre")
public class ChambreEntity {
    @Id
    @GeneratedValue(strategy = GenerationType.UUID)
    private UUID id;
    private CategorieChambre categorieChambre;
    private int prixChambre;
    private boolean aNettoyer;
    private int effectifMaximum;
    private EtatChambre etatChambre;

}

/**
 * - effectifMaximal : int
 * - categorieChambre : categorieChambre
 * - aNettoyer : boolean
 * - etatChambre
 */
