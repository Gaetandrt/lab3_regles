#include "GestionnaireRegles.h"

GestionnaireRegles::GestionnaireRegles() {}

GestionnaireRegles::~GestionnaireRegles() {}

Regle1 *GestionnaireRegles::getRegle1() const
{
  return new Regle1();
}

Regle2 *GestionnaireRegles::getRegle2() const
{
  return new Regle2();
}

Regle3 *GestionnaireRegles::getRegle3() const
{
  return new Regle3();
}

RegleComplexe *GestionnaireRegles::getRegleComplexe() const
{
  return new RegleComplexe();
}

Regle *GestionnaireRegles::getRegle(const std::string &id) const
{
  if (id == "UN")
    return getRegle1();
  else if (id == "DEUX")
    return getRegle2();
  else if (id == "TROIS")
    return getRegle3();
  else if (id == "COMPLEXE")
    return getRegleComplexe();
  else
    return nullptr;
}
