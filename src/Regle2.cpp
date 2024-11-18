#include "Regle2.h"

Regle2::Regle2()
{
  this->id = "DEUX";
}

Regle2::~Regle2() {}

bool Regle2::validerProduit(const Produit &produit) const
{
  return produit.getPrix() > 0;
}