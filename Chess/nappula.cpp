#include "Header.h"
Nappula::Nappula(std::wstring _unicode, int _vari, int _koodi)
{
	unicode = _unicode;
	vari = _vari;
	koodi = _koodi;
	
}
int Nappula::getKoodi(){

	return koodi;
}
void Nappula::setKoodi(int _koodi) {
	koodi = _koodi;
}

int Nappula::getVari() {
	
	return vari;
}
void Nappula::setVari(int _vari)
{
	vari = _vari;
}
wstring Nappula::getUnicode() {
	
	return unicode;
}
void Nappula::setUnicode(wstring _unicode)
{
	unicode = _unicode;
}

