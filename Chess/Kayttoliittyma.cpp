#include "Header.h"
#include <iostream>

Kayttoliittyma::Kayttoliittyma(Asema* _asema) 
{
	asema = _asema;
}
void Kayttoliittyma::piirraLauta() 
{
	_setmode(_fileno(stdout), 0x00020000);
	int n = 8;
	bool valkoinen =true;
	for (int s = 7;s >= 0;s--) 
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		if (n != 0) {
			wcout << n;
		}
		else {
			wcout << " ";
		}
		
		n--;
		
		for (int r = 0;r < 8;r++) 
		{
			if (valkoinen) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED |
					BACKGROUND_GREEN | BACKGROUND_BLUE);
				if (r != 7) 
				{
					valkoinen = false;
				}
				
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
					BACKGROUND_GREEN );
				if(r!=7){
					valkoinen = true;
				}
				
			}
			
			if (asema->lauta[r][s] == nullptr) 
			{
				wcout << "   ";
			} 
			else 
			{
				wcout << " " << asema->lauta[r][s]->getUnicode() << " ";
			}
			
		}
		wcout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

	}
	wcout << "  a  b  c  d  e  f  g  h" << endl;
}
Siirto Kayttoliittyma::annaVastustajanSiirto() 
{
	Siirto vastustajanSiirto;
	Ruutu ruutu1;
	Ruutu ruutu2;
	string teksti;
	char * tekstiChar = new char[6];
	cin >> teksti;
	if (teksti == "O-O") {

	}
	else if(teksti == "O-O-O"){

	}
	else {
		std::strcpy(tekstiChar,teksti.c_str());
		// Ruutu(rivi,sarake)
		ruutu1 = Ruutu((int)tekstiChar[2] - 49, (int)tekstiChar[1] - 97);
		ruutu2 = Ruutu((int)tekstiChar[5] - 49, (int)tekstiChar[4] - 97);
		//cout << tekstiChar[1];
		vastustajanSiirto = Siirto(ruutu1, ruutu2);
		
	}
	return  vastustajanSiirto;
}