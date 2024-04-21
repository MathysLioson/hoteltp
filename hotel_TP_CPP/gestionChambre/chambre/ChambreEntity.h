#ifndef CHAMBRE_ENTITY_H
#define CHAMBRE_ENTITY_H

#include <string>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

// Enum to represent the category of the room
enum class CategorieChambre {
    SIMPLE, DOUBLE, SUITE
};

// Enum to represent the current state of the room
enum class EtatChambre {
    A_FAIRE, LIBRE, GROS_DEGATS
};

class ChambreEntity {
private:
    boost::uuids::uuid id; // Unique identifier for the room
    std::string numeroChambre; // Room number
    CategorieChambre categorie; // Category of the room
    double prix; // Price per night
    bool aNettoyer; // Needs cleaning
    EtatChambre etat; // Current state of the room

public:
    // Constructors
    ChambreEntity();
    ChambreEntity(const std::string& numero, CategorieChambre cat, double prix, bool nettoyer, EtatChambre etat);

    // Getter and setter for room number
    std::string getNumeroChambre() const;
    void setNumeroChambre(const std::string& numero);

    // Getter and setter for category
    CategorieChambre getCategorie() const;
    void setCategorie(CategorieChambre cat);

    // Getter and setter for price
    double getPrix() const;
    void setPrix(double prix);

    // Getter and setter for cleaning status
    bool isANettoyer() const;
    void setANettoyer(bool nettoyer);

    // Getter and setter for room state
    EtatChambre getEtat() const;
    void setEtat(EtatChambre etat);

    // Unique identifier management
    boost::uuids::uuid getId() const;
    void setId(const boost::uuids::uuid& newId);

    int getEffectifMaximum();
};

#endif // CHAMBRE_ENTITY_H
