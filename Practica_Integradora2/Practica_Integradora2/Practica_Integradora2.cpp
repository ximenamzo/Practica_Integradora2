#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	string nombre;
	float SaldoInicial, SaldoActual;
	int SeguirApostando, Apuesta, Aleatorio;
	srand(time(NULL));

	cout << "Bienvenido a mi casino.";
	cout << "Introduce tu nombre: ";
	cin >> nombre;
	cout << "Cual es tu saldo? ";
	cin >> SaldoInicial;
	SaldoActual = SaldoInicial;
	
	do
	{
		cout << "Cuanto deseas apostar? ";
		cin >> Apuesta;
		if (SaldoActual > Apuesta)
		{
			//Apuesta
			Aleatorio = 1 + rand() % (3-1);
			if (Aleatorio > 1)
			{
				//Gano
			}
			else
			{
				cout << "Has perdido tu apuesta";
				SaldoActual = SaldoActual - Apuesta;
			}
		}
		else
		{
			cout << "Saldo insuficiente.";
			Apuesta = 2;
		}
	}
	while (Apuesta = 2);
	{

	}

}