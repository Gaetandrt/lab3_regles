#pragma once

#include <string>
#include "Produit.h"

class Regle
{
public:
  virtual ~Regle() = default;
  virtual std::string getId() const = 0;
  virtual bool validerProduit(const Produit &produit) const = 0;
};
