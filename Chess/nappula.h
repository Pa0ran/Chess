#pragma once
#include "Header.h"
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
};
