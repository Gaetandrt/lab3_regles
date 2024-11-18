#include "Regle1.h"

Regle1::Regle1()
{
  this->id = "UN";
}

Regle1::~Regle1() {}

bool Regle1::validerProduit(const Produit &produit) const
{
  if (produit.getId() != "")
    return true;
  else
    return false;
}