#ifndef _TELEFON_MOBIL_H_
#define _TELEFON_MOBIL_H_

class TelefonMobil
{
private:
	int _codPin;

public:
	TelefonMobil();
	bool VerificarePin(int pin);
	void ModificarePin(int pinNou);
	void AcceptareApel(char* numarApelant);
	void EfectuareApel(char* numarApelat);

};

#endif