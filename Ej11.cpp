#include <iostream>

// 11. Dados N valores informar el mayor, el menor y en 
// que posición del conjunto fueron
// ingresados.

int main()
{
	float valores[10], mayor = 0, menor = 0;
	int posicionMayor, posicionMenor;

	// Ingreso valores de prueba
	// si queres salir de este loop escribi "Salir"
	for(int i = 0; i < sizeof(valores) / sizeof(float); i++)
		std::cin >> valores[i];

	for(int i = 0; i < sizeof(valores) / sizeof(float); i++)
	{
		if(valores[i] >= mayor)
		{
			mayor = valores[i];
			posicionMayor = i;
		}
		else if (valores[i] <= menor)
		{
			menor = valores[i];
			posicionMenor = i;
		}
	}

	std::cout << "Mayor: " << mayor << " " << "Posicion: " << posicionMayor << std::endl;
	std::cout << "Menor: " << menor << " " << "Posicion: " << posicionMenor << std::endl;
}