#pragma once

#include "Regle.h"
#include <list>
#include <iostream>

class Validateur
{
public:
  Validateur() = default;
  ~Validateur();

  void ajouterRegle(Regle *regle);
  bool validerProduit(const Produit &produit);

private:
  std::list<Regle *> regles;
};
