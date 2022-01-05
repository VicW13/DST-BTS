#include <string>
#include <vector>
#include "Header.h"

using namespace std;

Pulverisation::Pulverisation(int id, double dosage, string datePulverisation) : id(id), dosage(dosage), datePulverisation(datePulverisation) {}

Pulverisation::~Pulverisation() {
	delete this;
}

int Pulverisation::getId()
{
	return this->id;
}

double Pulverisation::getDosage()
{
	return this->dosage;
}

string Pulverisation::getDatePulverisation()
{
	return this->datePulverisation;
}

double Pulverisation::setDosage(double dosage)
{
	return this->dosage = dosage;
}

string Pulverisation::setDatePulverisation(string datePulverisation)
{
	return this->datePulverisation = datePulverisation;
}
