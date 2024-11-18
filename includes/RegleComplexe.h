#pragma once

#include "Regle.h"
#include "Regle2.h"
class RegleComplexe : public Regle
{
public:
  RegleComplexe();
  ~RegleComplexe();

  inline std::string getId() const override { return id; }
  bool validerProduit(const Produit &produit) const override;

  class ClasseEnfant
  {
  public:
    static bool validationComplexe(const Produit &produit);
  };

private:
  std::string id;
};
