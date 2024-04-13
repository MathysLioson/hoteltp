package com.example.hoteljavafinal.gestionChambrev1.hotel.exceptions;

public class DroitInsuffisantException extends Exception {
    private static final String DROIT_INSUFFISANT_EXCEPTION = "Seul un manager peut effectuer cette action";

    public DroitInsuffisantException() { super(DROIT_INSUFFISANT_EXCEPTION);}

}
