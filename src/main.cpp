#include "Produit.h"
#include "Validateur.h"
#include "GestionnaireRegles.h"

int main()
{
    Produit produit1("1", 20, true, 11);
    Produit produit2("2", -1, false, 22);
    Produit produit3("", 10, true, 33);
    Produit produit4("4", 20, false, 44);
    Produit produit5("5", 999, true, -10);

    Validateur validateur;

    GestionnaireRegles gestionnaire;

    validateur.ajouterRegle(gestionnaire.getRegle1());
    validateur.ajouterRegle(gestionnaire.getRegle2());
    validateur.ajouterRegle(gestionnaire.getRegle3());
    validateur.ajouterRegle(gestionnaire.getRegle("UN"));
    validateur.ajouterRegle(gestionnaire.getRegle("DEUX"));
    validateur.ajouterRegle(gestionnaire.getRegle("TROIS"));
    validateur.ajouterRegle(gestionnaire.getRegle1());
    validateur.ajouterRegle(gestionnaire.getRegleComplexe());

    validateur.validerProduit(produit1);
    validateur.validerProduit(produit2);
    validateur.validerProduit(produit3);
    validateur.validerProduit(produit4);
    validateur.validerProduit(produit5);
}
