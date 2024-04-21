#include <iostream>
#include <string>

class ChambreDTO {
private:
    int numero;
    std::string categorie;
    double prix;
    bool disponible;

public:
    // Constructeurs
    ChambreDTO() : numero(0), prix(0.0), disponible(false) {}
    ChambreDTO(int num, std::string cat, double prix, bool disp) : numero(num), categorie(cat), prix(prix), disponible(disp) {}

    // Getters
    int getNumero() const { return numero; }
    std::string getCategorie() const { return categorie; }
    double getPrix() const { return prix; }
    bool isDisponible() const { return disponible; }

    // Setters
    void setNumero(int num) { numero = num; }
    void setCategorie(const std::string& cat) { categorie = cat; }
    void setPrix(double p) { prix = p; }
    void setDisponible(bool disp) { disponible = disp; }

    // Méthodes d'affichage
    void afficher() const {
        std::cout << "Numero: " << numero
                  << ", Categorie: " << categorie
                  << ", Prix: " << prix
                  << ", Disponible: " << (disponible ? "Oui" : "Non") << std::endl;
    }

    // Méthodes de comparaison
    bool operator==(const ChambreDTO& autre) const {
        return numero == autre.numero && categorie == autre.categorie &&
               prix == autre.prix && disponible == autre.disponible;
    }
};

int main() {
    ChambreDTO chambre(101, "Suite", 150.0, true);
    chambre.afficher();
    return 0;
}
