package com.example.hoteljavafinal.gestionChambrev1.chambre;

public enum CategorieChambre_old {
    SIMPLE(50,2),
    DOUBLE(80,4),
    SUITE(150,6);
    private int prix;
    private int effectifMaximal;

    CategorieChambre_old(int arg_prix, int arg_effectif) {
        this.prix = prix;
        this.effectifMaximal = arg_effectif;
    }
    public int getPrix() {
        return this.prix;
    }
    public int getEffectifMaximal() {
        return this.effectifMaximal;
    }
}
