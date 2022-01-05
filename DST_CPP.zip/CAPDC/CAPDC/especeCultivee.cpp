#include <string>
#include <vector>
#include "Header.h"

using namespace std;

EspeceCultivee::EspeceCultivee(int id, string libelle, string type) : id(id), libelle(libelle), type(type) {}

EspeceCultivee::~EspeceCultivee() {
	delete this;
}

int EspeceCultivee::getId()
{
	return this->id;
}

string EspeceCultivee::getLibelle()
{
	return this->libelle;
}

string EspeceCultivee::getType()
{
	return this->type;
}

string EspeceCultivee::setLibelle(string libelle)
{
	return this->libelle= libelle;
}

string EspeceCultivee::setType(string type)
{
	return this->type = type;
}
