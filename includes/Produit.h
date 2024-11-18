#pragma once

#include <string>
#include <iostream>

class Produit
{
public:
  Produit(const std::string &id, int quantite, bool enStock, int prix);
  ~Produit();

  inline std::string getId() const { return id; }
  inline int getQuantite() const { return quantite; }
  inline bool isEnStock() const { return enStock; }
  inline int getPrix() const { return prix; }

  inline friend std::ostream &operator<<(std::ostream &os, const Produit &produit)
  {
    os << "produit " << produit.id << " {" << produit.enStock << "/" << produit.prix << "$/" << produit.quantite << "}";
    return os;
  }

private:
  std::string id;
  int quantite;
  bool enStock;
  int prix;
};
