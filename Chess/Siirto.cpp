#include "Header.h"


Siirto::Siirto(Ruutu square1, Ruutu square2) 
{
	_alkuRuutu = square1;
	_loppuRuutu = square2;
}
Siirto::Siirto(bool lyhytLinna, bool pitkaLinna) 
{
	_lyhytLinna = lyhytLinna;
	_pitkalinna = pitkaLinna;
}
Ruutu Siirto::getAlkuruutu() 
{
	return _alkuRuutu;
}
Ruutu Siirto::getLoppuruutu() 
{
	return _loppuRuutu;
}
bool Siirto::onkoLyhytLinna() {
	return _lyhytLinna;
}
bool Siirto::onkoPitkalinna() {
	return _pitkalinna;
}
