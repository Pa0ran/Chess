#pragma once
#include "Header.h"
#include "nappula.h"
#include "Siirto.h"
using namespace std;

class Asema {
private:
	Nappula* VT;
	Nappula* VR;
	Nappula* VL;
	Nappula* VD;
	Nappula* VK;
	Nappula* VS;
	Nappula* MT;
	Nappula* MR;
	Nappula* ML;
	Nappula* MD;
	Nappula* MK;
	Nappula* MS;
	int siirtovuoro;
	bool onkoValkeaKuningasLiikkunut;
	bool onkoMustaKuningasLiikkunut;
	bool onkoValkeaDTliikkunut;
	bool onkoValkeaKTliikkunut;
	bool onkoMustaDTliikkunut;
	bool onkoMustaKTliikkunut;
public:
	//Konstruktori luo alkuaseman laudalle
	Asema();
	Nappula* lauta[8][8];
	void paivitaAsema(Siirto* siirto);
	int getSiirtovuoro();
	void setSiirtovuoro(int vari);
	bool getOnkoValkeaKuningasLiikkunut();
	bool getOnkoMustaKuningasLiikkunut();
	bool getOnkoValkeaDTliikkunut();
	bool getOnkoValkeaKTliikkunut();
	bool getOnkoMustaDTliikkunut();
	bool getOnkoMustaKTliikkunut();

};
