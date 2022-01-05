#include <string>
#include <vector>
#include "Header.h"

using namespace std;

TraitementEnChamp::TraitementEnChamp(){}

TraitementEnChamp::~TraitementEnChamp() {
	delete this;
}

double TraitementEnChamp::quantiteAppliquee()
{
	return 0.0;
}