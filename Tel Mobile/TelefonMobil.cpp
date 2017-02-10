#include "TelefonMobil.h"
#include <iostream>
using namespace std;

TelefonMobil::TelefonMobil():_codPin(0)
{
}


bool TelefonMobil::VerificarePin(int pin)
{
	return (_codPin==pin);
}


void TelefonMobil::ModificarePin(int pinNou)
{
	_codPin=pinNou;
}

void TelefonMobil::AcceptareApel(char* numarApelant)
{
	cout << "Apel de la:" << numarApelant << endl;

}

void TelefonMobil::EfectuareApel(char* numarApelat)
{
	cout << "Apel catre:" << numarApelat << endl;
}

int main()
{
	TelefonMobil unTelefon;

	unTelefon.ModificarePin(1234);
	if(unTelefon.VerificarePin(1234))
	{
		cout << "Cod PIN modificat" << endl;
	}

	unTelefon.EfectuareApel("0351 111111");

	unTelefon.AcceptareApel("0351 222222");

	getchar();

	return 0;

}

