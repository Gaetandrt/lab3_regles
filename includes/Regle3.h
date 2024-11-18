#pragma once

#include "Regle.h"

class Regle3 : public Regle
{
public:
  Regle3();
  ~Regle3();

  inline std::string getId() const override { return id; }
  bool validerProduit(const Produit &produit) const override;

private:
  std::string id;
};
