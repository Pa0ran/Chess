#include "Header.h"

void Sotilas::annaSiirrot(list<Siirto>& lista, Ruutu* ruutu, Asema* asema, int vari) 
{

	cout << "Lista";
	int rivi = ruutu->getRivi();
	int sarake = ruutu->getSarake();
	if (vari == 0) 
	{
		if (rivi == 1) 
		{
			if (asema->lauta[rivi+2][sarake] == nullptr) 
			{
				
				lista.push_back(Siirto(*ruutu, Ruutu(rivi + 2, sarake)));
			}
			
		}
		if (asema->lauta[rivi + 1][sarake] == nullptr)
		{
			lista.push_back(Siirto(*ruutu, Ruutu(rivi + 1, sarake)));
		}
		if (asema->lauta[rivi + 1][sarake + 1]->getVari() == 1) 
		{
			lista.push_back(Siirto(*ruutu, Ruutu(rivi + 1, sarake+1)));
		}
		if (asema->lauta[rivi + 1][sarake - 1]->getVari() == 1)
		{
			lista.push_back(Siirto(*ruutu, Ruutu(rivi + 1, sarake-1)));
		}
		

	}
	else 
	{
		if (rivi == 6)
		{
			if (asema->lauta[rivi - 2][sarake] == nullptr)
			{

				lista.push_back(Siirto(*ruutu, Ruutu(rivi - 2, sarake)));
			}

		}
		if (asema->lauta[rivi - 1][sarake] == nullptr)
		{
			lista.push_back(Siirto(*ruutu, Ruutu(rivi - 1, sarake)));
		}
		if (asema->lauta[rivi - 1][sarake + 1]->getVari() == 0)
		{
			lista.push_back(Siirto(*ruutu, Ruutu(rivi - 1, sarake + 1)));
		}
		if (asema->lauta[rivi - 1][sarake - 1]->getVari() == 0)
		{
			lista.push_back(Siirto(*ruutu, Ruutu(rivi - 1, sarake - 1)));
		}

	}
	
	for each (Siirto s in lista)
	{
		
		cout << s.getAlkuruutu().getRivi() << " "<<s.getAlkuruutu().getSarake() << " " << s.getLoppuruutu().getRivi() << " " << s.getLoppuruutu().getSarake() << endl;
	}
	//lista.push_back
	
}