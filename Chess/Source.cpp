#include "Header.h"


int main() 
{


	Asema * asemat = new Asema();
	Kayttoliittyma liittyma = Kayttoliittyma(asemat);
	liittyma.piirraLauta();
	Ruutu ruutu1 = Ruutu(6,0 );
	Ruutu ruutu2 = Ruutu(4, 0);
	Siirto * siirto = new Siirto(ruutu1,ruutu2);
	asemat->paivitaAsema(siirto);
	liittyma.piirraLauta();
	asemat->paivitaAsema(&liittyma.annaVastustajanSiirto());
	liittyma.piirraLauta();
	wcout << endl;
	return 0;
}

	
