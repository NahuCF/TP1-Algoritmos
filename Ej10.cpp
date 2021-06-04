#include <iostream>

// 10. Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo
// de un empleado, excepto el ultimo valor que es cero e indica el fin del conjunto.Se
// pide desarrollar un programa que determine e informe :
// - Cuantos empleados ganan menos $ 1.520.
// - Cuantos ganan $1.520 o mas pero menos de $2.780.
// - Cuantos ganan $2.780 o mas pero menos de $5.999.
// - Cuantos ganan $5.999 o mas. 

int main()
{
	int sueldos[100], condicion1 = 0, condicion2 = 0, condicion3 = 0, condicion4 = 0;

	std::cout << "Inserte los sueldos uno a uno:" << std::endl;

	// Resivo inputs
	for(int i = 0; i < sizeof(sueldos) / sizeof(int); i++)
	{
		std::cin >> sueldos[i];
		if(sueldos[i] == 0)
			break;
	}

	// Reviso condiciones
	for (int i = 0; i < sizeof(sueldos) / sizeof(int); i++)
	{
		if(sueldos[i] != 0)
		{
			if(sueldos[i] < 1520)
				condicion1++;
			else if(sueldos[i] >= 1520 && sueldos[i] < 2780)
				condicion2++;
			else if(sueldos[i] >= 2780 && sueldos[i] < 5990)
				condicion3++;
			else if(sueldos[i] >= 5999 )
				condicion4++;
		}
		else
		{
			break;
		}
	}

	// Le hago un rico cout a todo
	std::cout << "Condicion1: " << condicion1 << std::endl;
	std::cout << "Condicion2: " << condicion2 << std::endl;
	std::cout << "Condicion3: " << condicion3 << std::endl;
	std::cout << "Condicion4: " << condicion4 << std::endl;
}