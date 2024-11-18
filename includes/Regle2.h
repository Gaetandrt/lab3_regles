#pragma once

#include "Regle.h"

class Regle2 : public Regle
{
public:
  Regle2();
  ~Regle2();

  inline std::string getId() const override { return id; }
  bool validerProduit(const Produit &produit) const override;

private:
  std::string id;
};
