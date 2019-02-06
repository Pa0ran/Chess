#pragma once
#include "Header.h"
class Kuningas :public Nappula {

	void annaSiirrot(std::list<Siirto>& lista, Ruutu*, Asema*, int vari);
	using Nappula::Nappula;
};
