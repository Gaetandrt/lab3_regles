#include "Produit.h"

Produit::Produit(const std::string &id, int quantite, bool enStock, int prix) : id(id), quantite(quantite), enStock(enStock), prix(prix) {}

Produit::~Produit() {}
