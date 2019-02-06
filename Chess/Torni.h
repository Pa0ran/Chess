#pragma once
#include "Header.h"
class Torni :public Nappula 
{
	void annaSiirrot(std::list<Siirto>& lista, Ruutu*, Asema*, int vari);
	using Nappula::Nappula;
};
