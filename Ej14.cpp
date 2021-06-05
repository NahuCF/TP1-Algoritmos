#include <iostream>

// 14. Un buque de carga traslada 100 contenedores a tres diferentes puertos del país.Los
// puertos se identifican con los números 1, 2 y 3.
// De cada contenedor que el buque traslade se registran los siguientes datos :
// - Identificación del contenedor(entero)
// - Peso del contenedor en kg(entero)
// - Puerto de arribo(un valor de 1 a 3).
// Se pide calcular e informar :
// i.El peso total que el buque debe trasladar
// ii.La identificación del contenedor de mayor peso
// iii.La cantidad de contenedores que debe trasladar a cada puerto

bool PuertoEsValido(float puerto, int& contPuerto1, int& contPuerto2, int& contPuerto3, bool& error)
{
	if(puerto == 1)
		contPuerto1++;
	else if(puerto == 2)
		contPuerto2++;
	else if (puerto == 3)
		contPuerto3++;
	else
	{
		error = 1;
		std::cout << "NUMERO::DE::PUERTO::INVALIDO (" << puerto << ")" << std::endl;
		return false;
	}

	return true;
}

int main()
{
	int identMasPesado = 0, masPesado = 0, pesoTotal = 0, contPuerto1 = 0, contPuerto2 = 0, contPuerto3 = 0;
	float identDePrueba = -1, pesoDePrueba = 0, puertoDePrueba = 0;
	bool hayError = 0;

	std::cout << "Ingresa los 300 valores que pide este ejercicio..." << std::endl;
	std::cout << "O cuando te aburras escribi como identificador -333\n\n";

	for (int i = 0; i < 100; i++)
	{
		if(identDePrueba == -1) // Significa que es el primer valor que se ingresa
		{
			std::cout << "Identificador contenedor " << i + 1 << ": ";
			std::cin >> identDePrueba;

			if(identDePrueba != -333)
				identMasPesado = (int)identDePrueba; // Uso casting para que se entienda mejor, espero que no me bajen un punto por esto...
			else
				break;

			std::cout << "Peso del contenedor: ";
			std::cin >> pesoTotal; // El unico peso que se va a ingresar es el total
			masPesado = pesoTotal;
			std::cout << "Puerto: ";
			std::cin >> puertoDePrueba;

			// Reviso a que puerto tiene que ir si es valido
			if(!PuertoEsValido(puertoDePrueba, contPuerto1, contPuerto2, contPuerto3, hayError))
				break;
		}
		else
		{
			std::cout << std::endl;
			std::cout << "Identificador contenedor " << i + 1 << ": ";
			std::cin >> identDePrueba;

			if(identDePrueba == -333)
				break;

			std::cout << "Peso del contenedor: ";
			std::cin >> pesoDePrueba;

			if(pesoDePrueba > masPesado)
			{
				masPesado = pesoDePrueba;
				identMasPesado = identDePrueba;
			}
			pesoTotal += pesoDePrueba;

			std::cout << "Puerto: ";
			std::cin >> puertoDePrueba;

			// Reviso a que puerto tiene que ir si es valido
			if(!PuertoEsValido(puertoDePrueba, contPuerto1, contPuerto2, contPuerto3, hayError))
				break;
		}
	}

	if(!hayError)
	{
		std::cout << std::endl;
		std::cout << "Peso total: " << pesoTotal << std::endl;
		std::cout << "Contenedor mayor peso: " << identMasPesado << std::endl;
		std::cout << "Contenedor puerto 1: " << contPuerto1 << std::endl;
		std::cout << "Contenedor puerto 2: " << contPuerto2 << std::endl;
		std::cout << "Contenedor puerto 3: " << contPuerto3 << std::endl;
	}
}