#include <string>
#include <map>
#include <vector>
using namespace std;

class Exploitation {

public:
	Exploitation(int, string, string);
	~Exploitation();
	int getId();
	string getNomExploitant();
	string getMelExploitant();
	string setMelExploitant(string melExploitant);

private:
	int id;
	string nomExploitant, melExploitant;
};

class Parcelle {

public:
	Parcelle(int, string, string, string);
	~Parcelle();
	int getId();
	string getDateSemis();
	string getDateRecoltePrevue();
	string getSurface();
	string setDateSemis(string dateSemis);
	string setDateRecoltePrevue(string dateRecoltePrevue);
	string setSurface(string surface);
	void ajouteUnTraitement();

private:
	int id;
	string dateSemis, dateRecoltePrevue, surface;
};

class EspeceCultivee {

public:
	EspeceCultivee(int, string, string);
	~EspeceCultivee();
	int getId();
	string getLibelle();
	string getType();
	string setLibelle(string libelle);
	string setType(string type);

private:
	int id;
	string libelle, type;
};

class TraitementPhytosanitaire {

public:
	TraitementPhytosanitaire(int);
	~TraitementPhytosanitaire();
	int getId();
	double quantiteAppliquee();

private:
	int id;
};

class ProduitPhyto {

public:
	int getId();
	string getLibelle();
	string setLibelle(string libelle);

private:
	int id;
	string libelle();
};

class TraitementSemence {
	
public:
	TraitementSemence(int);
	~TraitementSemence();
	int getDosageTraitementSemence();
	int setDosageTraitementSemence(int dosageTraitementSemence);
	double quantiteAppliquee();

private:
	int dosageTraitementSemence;
};

class TraitementEnChamp {

public:
	TraitementEnChamp();
	~TraitementEnChamp();
	double quantiteAppliquee();
};

class Pulverisation {

public:
	Pulverisation(int, double, string);
	~Pulverisation();
	int getId();
	double getDosage();
	string getDatePulverisation();
	double setDosage(double dosage);
	string setDatePulverisation(string datePulverisation);

private:
	int id;
	double dosage;
	string datePulverisation;
};