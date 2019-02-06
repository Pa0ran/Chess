#pragma once
//#include "Header.h"
#include <list>
#include "Siirto.h"
#include "Ruutu.h"
// #include "Asema.h"
using namespace std;

class Asema;
// Vakioarvot nappulatyypeille.
enum
{
	VT, VR, VL, VD, VK, VS,
	MT, MR, ML, MD, MK, MS
};

class Nappula {

private:
	std::wstring unicode;
	int vari; // valkea = 0, musta = 1
	int koodi; // VT, VR, MT tms.
public:
	Nappula(std::wstring, int, int);
	Nappula() {};
	void setKoodi(int);
	int getKoodi();
	void setUnicode(std::wstring);
	std::wstring getUnicode();
	void setVari(int);
	int getVari();
	virtual void annaSiirrot(list<Siirto>& lista, Ruutu* ruutu, Asema* asema, int vari) = 0;
};
