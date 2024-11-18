#include "RegleComplexe.h"

RegleComplexe::RegleComplexe()
{
  this->id = "COMPLEXE";
}

RegleComplexe::~RegleComplexe() {}

bool RegleComplexe::validerProduit(const Produit &produit) const
{
  return ClasseEnfant::validationComplexe(produit);
}

bool RegleComplexe::ClasseEnfant::validationComplexe(const Produit &produit)
{
  Regle2 regle2;

  if (!regle2.validerProduit(produit))
  {
    return false;
  }
  return produit.isEnStock();
}