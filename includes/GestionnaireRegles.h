#pragma once

#include "Regle.h"
#include "Regle1.h"
#include "Regle2.h"
#include "Regle3.h"
#include "RegleComplexe.h"

class GestionnaireRegles
{
public:
  GestionnaireRegles();
  ~GestionnaireRegles();

  Regle1 *getRegle1() const;
  Regle2 *getRegle2() const;
  Regle3 *getRegle3() const;
  Regle *getRegle(const std::string &id) const;
  RegleComplexe *getRegleComplexe() const;
};
