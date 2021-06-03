#include <iostream>

// 8. Dados 50 números enteros, informar el promedio de los mayores que 100 
// y la suma de
// los menores que - 10

int main()
{
	float promedioCien = 0, totalCien = 0, sumaMenosDies = 0;
	int numeros[50];

	std::cout << "Ingrese los 50 numeros: " << std::endl;

	for (int i = 0; i < sizeof(numeros) / sizeof(int); i++)
	{
		std::cout << "Numero " << i + 1<< ": ";
		std::cin >> numeros[i];
	}

	for (int i = 0; i < sizeof(numeros) / sizeof(int); i++)
	{
		if (numeros[i] > 100)
		{
			promedioCien += numeros[i];
			totalCien++;
		}
		else if (numeros[i] < -10)
		{
			sumaMenosDies += numeros[i];
		}
	}
	
	std::cout << std::endl;
	std::cout << "Promedio: " << promedioCien / totalCien << std::endl;
	std::cout << "Suma: " << sumaMenosDies << std::endl;
}