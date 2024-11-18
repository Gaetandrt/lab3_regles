#include "Validateur.h"

Validateur::~Validateur()
{
  for (auto regle : regles)
  {
    delete regle;
  }
  regles.clear();
}

void Validateur::ajouterRegle(Regle *regle)
{
  regles.push_back(regle);
}

bool Validateur::validerProduit(const Produit &produit)
{
  bool allValid = true;

  std::cout << "VALIDATION du "
            << produit
            << std::endl
            << std::endl;

  for (const auto &regle : regles)
  {
    bool result = regle->validerProduit(produit);
    std::cout << "Regle "
              << regle->getId()
              << " : "
              << result
              << std::endl;

    if (!result)
      allValid = false;
  }

  std::cout << "Produit VALIDE? "
            << allValid
            << std::endl
            << std::endl;

  return allValid;
}
