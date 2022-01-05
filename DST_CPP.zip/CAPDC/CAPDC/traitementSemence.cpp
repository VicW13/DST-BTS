#include <string>
#include <vector>
#include "Header.h"

using namespace std;

TraitementSemence::TraitementSemence(int dosageTraitementSemence) : dosageTraitementSemence(dosageTraitementSemence) {}

TraitementSemence::~TraitementSemence() {
	delete this;
}

int TraitementSemence::getDosageTraitementSemence()
{
	return this->dosageTraitementSemence;
}

int TraitementSemence::setDosageTraitementSemence(int dosageTraitementSemence)
{
	return this->dosageTraitementSemence = dosageTraitementSemence;
}

double TraitementSemence::quantiteAppliquee()
{
	return 0.0;
}