#include <string>
#include <vector>
#include "Header.h"

using namespace std;

Parcelle::Parcelle(int id, string dateSemis, string dateRecoltePrevue, string surface) : id(id), dateSemis(dateSemis), dateRecoltePrevue(dateRecoltePrevue), surface(surface) {}

Parcelle::~Parcelle() {
	delete this;
}

int Parcelle::getId()
{
	return this->id;
}

string Parcelle::getDateSemis()
{
	return this->dateSemis;
}

string Parcelle::getDateRecoltePrevue()
{
	return this->dateRecoltePrevue;
}

string Parcelle::getSurface()
{
	return this->surface = surface;
}

string Parcelle::setDateSemis(string dateSemis)
{
	return this->dateSemis = dateSemis;
}

string Parcelle::setDateRecoltePrevue(string dateRecoltePrevue)
{
	return this->dateRecoltePrevue = dateRecoltePrevue;
}

string Parcelle::setSurface(string surface)
{
	return this->surface = surface;
}

void Parcelle::ajouteUnTraitement()
{
}