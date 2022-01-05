#include <string>
#include <vector>
#include "Header.h"

using namespace std;

TraitementPhytosanitaire::TraitementPhytosanitaire(int id) : id(id) {}

TraitementPhytosanitaire::~TraitementPhytosanitaire() {
	delete this;
}

int TraitementPhytosanitaire::getId()
{
	return this->id;
}

double TraitementPhytosanitaire::quantiteAppliquee()
{
	return 0.0;
}

