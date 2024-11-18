#pragma once

#include "Regle.h"

class Regle1 : public Regle
{
public:
  Regle1();
  ~Regle1();

  inline std::string getId() const override { return id; }
  bool validerProduit(const Produit &produit) const override;

private:
  std::string id;
};
