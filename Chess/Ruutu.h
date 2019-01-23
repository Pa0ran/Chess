#pragma once
#include "Header.h"
class Ruutu {
public:
	Ruutu(int rivi, int sarake);
	Ruutu() {}
	int getRivi();
	int getSarake();
private:
	int _sarake;
	int _rivi;
};
