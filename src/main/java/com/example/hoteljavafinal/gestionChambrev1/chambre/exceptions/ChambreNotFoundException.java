package com.example.hoteljavafinal.gestionChambrev1.chambre.exceptions;

public class ChambreNotFoundException extends Exception {
    private static final String CHAMBRE_NOT_FOUND_EXCEPTION = "Chambre non trouvée";

    public ChambreNotFoundException() {
        super(CHAMBRE_NOT_FOUND_EXCEPTION);
    }
}
