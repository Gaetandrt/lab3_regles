#include "Regle3.h"

Regle3::Regle3()
{
  this->id = "TROIS";
}

Regle3::~Regle3() {}

bool Regle3::validerProduit(const Produit &produit) const
{
  return produit.getQuantite() > 0;
}