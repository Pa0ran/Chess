#include "Header.h"
Asema::Asema() 
{
	VT = new Nappula(L"\u2656", 0, 0);
	VR = new Nappula(L"\u2658", 0, 1);
	VL = new Nappula(L"\u2657", 0, 2);
	VD = new Nappula(L"\u2655", 0, 3);
	VK = new Nappula(L"\u2654", 0, 4);
	VS = new Nappula(L"\u2659", 0, 5);
	MT = new Nappula(L"\u265C", 0, 6);
	MR = new Nappula(L"\u265E", 0, 7);
	ML = new Nappula(L"\u265D", 0, 8);
	MD = new Nappula(L"\u265B", 0, 9);
	MK = new Nappula(L"\u265A", 0, 10);
	MS = new Nappula(L"\u265F", 0, 11);
	for (int i = 0; i < 8;i++) {
		for (int j = 0;j < 8;j++) {
			lauta[i][j] = nullptr;
		}
	}
	lauta[0][0] = MT;
	lauta[1][0] = MR;
	lauta[2][0] = ML;
	lauta[3][0] = MD;
	lauta[4][0] = MK;
	lauta[5][0] = ML;
	lauta[6][0] = MR;
	lauta[7][0] = MT;
	lauta[0][1] = MS;
	lauta[1][1] = MS;
	lauta[2][1] = MS;
	lauta[3][1] = MS;
	lauta[4][1] = MS;
	lauta[5][1] = MS;
	lauta[6][1] = MS;
	lauta[7][1] = MS;
	lauta[0][6] = VS;
	lauta[1][6] = VS;
	lauta[2][6] = VS;
	lauta[3][6] = VS;
	lauta[4][6] = VS;
	lauta[5][6] = VS;
	lauta[6][6] = VS;
	lauta[7][6] = VS;
	lauta[0][7] = VT;
	lauta[1][7] = VR;
	lauta[2][7] = VL;
	lauta[3][7] = VD;
	lauta[4][7] = VK;
	lauta[5][7] = VL;
	lauta[6][7] = VR;
	lauta[7][7] = VT;

}
void Asema::paivitaAsema(Siirto* siirto) 
{
	Nappula * nappula = lauta[siirto->getAlkuruutu().getSarake()][siirto->getAlkuruutu().getRivi()];
	lauta[siirto->getAlkuruutu().getSarake()][siirto->getAlkuruutu().getRivi()] = nullptr;
	lauta[siirto->getLoppuruutu().getSarake()][siirto->getLoppuruutu().getRivi()] = nappula;

	
}
int Asema::getSiirtovuoro() {
	return siirtovuoro;
}
void Asema::setSiirtovuoro(int vari) 
{
	siirtovuoro = vari;
}
bool Asema::getOnkoValkeaKuningasLiikkunut() {

	return onkoValkeaKuningasLiikkunut;
}
bool Asema::getOnkoMustaKuningasLiikkunut() {

	return onkoMustaKuningasLiikkunut;
}
bool Asema::getOnkoValkeaDTliikkunut() {

	return onkoValkeaDTliikkunut;
}
bool Asema::getOnkoValkeaKTliikkunut() {

	return onkoValkeaKTliikkunut;
}
bool Asema::getOnkoMustaDTliikkunut() {

	return onkoMustaDTliikkunut;
}
bool Asema::getOnkoMustaKTliikkunut() {
	return onkoMustaKTliikkunut;
}