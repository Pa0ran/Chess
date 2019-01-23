#pragma once
#include "Header.h"
class Kayttoliittyma {

public:
	Kayttoliittyma(Asema* _asema);
	Asema* asema;
	void piirraLauta();
	Siirto annaVastustajanSiirto();

};
