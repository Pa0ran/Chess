#include "Header.h"


int main() 
{

	list<Siirto> lista;
	Asema * asemat = new Asema();
	Kayttoliittyma liittyma = Kayttoliittyma(asemat);
	liittyma.piirraLauta();
	Ruutu ruutu1 = Ruutu(6,0 );
	Ruutu ruutu2 = Ruutu(4, 0);
	Ruutu *ruutu3 = new Ruutu(6, 6);
	Siirto * siirto = new Siirto(ruutu1,ruutu2);
	asemat->paivitaAsema(siirto);
	liittyma.piirraLauta();
	asemat->paivitaAsema(&liittyma.annaVastustajanSiirto());
	liittyma.piirraLauta();
	asemat->lauta[6][6]->annaSiirrot(lista, ruutu3, asemat, asemat->lauta[6][6]->getVari());
	for each (Siirto s in lista)
	{
		
		cout << s.getAlkuruutu().getRivi() << " " << s.getAlkuruutu().getSarake() << " " << s.getLoppuruutu().getRivi() << " " << s.getLoppuruutu().getSarake() << endl;
	}
	
	wcout << endl;
	return 0;
}

	
