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

	cout << "Bienvenido a mi casino." << endl;
	cout << "Introduce tu nombre: " << endl;
	cin >> nombre;
	cout << "Cual es tu saldo? " << endl;
	cin >> SaldoInicial;
	SaldoActual = SaldoInicial;
	
	do
	{
		cout << "Cuanto deseas apostar? " << endl;
		cin >> Apuesta;
		if (SaldoActual > Apuesta)
		{
			//Apuesta
			Aleatorio = 1 + rand() % (3-1);
			if (Aleatorio > 1)
			{
				//Gano
				cout << "Felicidades, has ganado!" << endl;
				SaldoActual = SaldoActual + Apuesta;
				cout << "Tu saldo actual es: " << SaldoActual << endl;
				//Seguimos en el vicio?
				cout << "Deseas seguir apostando? 1 = Si / 2 = No" << endl;
				cin >> SeguirApostando;
			}
			else
			{
				cout << "Has perdido tu apuesta" << endl;
				SaldoActual = SaldoActual - Apuesta;
				cout << "Tu saldo Actual es: " << SaldoActual << endl;
				//Seguimos en el vicio?
				cout << "Deseas seguir apostando? 1 = Si / 2 = No" << endl;
				cin >> SeguirApostando;
			}
		}
		else
		{
			cout << "Saldo insuficiente." << endl;
			SeguirApostando = 2;
			break;
		}
	} while (SeguirApostando = 2);
}