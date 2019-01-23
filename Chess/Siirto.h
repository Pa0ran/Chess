#pragma once
#include "Header.h"
#include "Ruutu.h"
class Siirto {
public:
	Siirto(Ruutu, Ruutu);
	Siirto() {}
	Siirto(bool lyhytLinna, bool pitkaLinna); // Poikkeussiirto linnoitusta varten
	Ruutu getAlkuruutu();
	Ruutu getLoppuruutu();
	bool onkoLyhytLinna();
	bool onkoPitkalinna();
private:
	Ruutu _alkuRuutu;
	Ruutu _loppuRuutu;
	int _miksiKorotetaan = 0;
	bool _lyhytLinna;
	bool _pitkalinna;
};
