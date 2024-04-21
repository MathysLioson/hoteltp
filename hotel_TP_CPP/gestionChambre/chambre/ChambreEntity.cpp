#include <string>
#include <iostream>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

enum class CategorieChambre {
    Simple, Double, Suite
};

enum class EtatChambre {
    Libre, Occupee, Reservee
};

class ChambreEntity {
private:
    boost::uuids::uuid id;
    CategorieChambre categorieChambre;
    int prixChambre;
    bool aNettoyer;
    int effectifMaximum;
    EtatChambre etatChambre;

public:
    // Constructeur par défaut
    ChambreEntity() : id(boost::uuids::random_generator()()), prixChambre(0), aNettoyer(false), effectifMaximum(1), etatChambre(EtatChambre::Libre) {}

    // Constructeur avec paramètres
    ChambreEntity(CategorieChambre cat, int prix, bool nettoyage, int effectif, EtatChambre etat)
    : id(boost::uuids::random_generator()()), categorieChambre(cat), prixChambre(prix), aNettoyer(nettoyage), effectifMaximum(effectif), etatChambre(etat) {}

    // Getters et Setters (exemple pour prixChambre)
    int getPrixChambre() const { return prixChambre; }
    void setPrixChambre(int prix) { prixChambre = prix; }

    // Autres getters et setters pourraient être ajoutés ici
    int getEffectifMaximum();
};

int ChambreEntity::getEffectifMaximum() {
    return effectifMaximum;
}

int main() {
    ChambreEntity chambre(CategorieChambre::Double, 100, false, 2, EtatChambre::Libre);
    std::cout << "Prix chambre: " << chambre.getPrixChambre() << std::endl;

    return 0;
}
