#include <iostream>

// 13. Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir(si
// hubo valores) :
// 	  - El valor máximo negativo
// 	  - El valor mínimo positivo
// 	  - El valor mínimo dentro del rango - 17.3 y 26.9
// 	  - El promedio de todos los valores.

// ---IMPORTANTE---------
// Si un input cumple varias condiciones
// se tomara como si se hubiese escrito
// 2 inputs (se sumara 2 al contador de
// valores ingresados)

void SetValores(float input, float& numeroAIgualar, float& total, int& numeroSumarUno)
{
	total += input;
	numeroAIgualar = input;
	numeroSumarUno++;
}

int main()
{
	int cantidadInputs = 0;
	float input = -1.0f, maxNegativo = 0, minPositivo = 0, dentroDeRango = 0, total = 0;
	
	while(input != 0)
	{
		std::cout << "Ingrese un valor: ";
		std::cin >> input;

		if(input != 0)
		{
			if (maxNegativo == 0 && input < 0)
			{
				SetValores(input, maxNegativo, total, cantidadInputs);
			}
			else if (minPositivo == 0 && input > 0)
			{
				SetValores(input, minPositivo, total, cantidadInputs);
			}
			else if (minPositivo == 0 && input >= -17.3 && input <= 26.9f)
			{
				SetValores(input, dentroDeRango, total, cantidadInputs);
			}
			else
			{
				if(input < 0 && input > maxNegativo)
				{
					SetValores(input, maxNegativo, total, cantidadInputs);
				}
				else if(input > 0 && input < minPositivo)
				{
					SetValores(input, minPositivo, total, cantidadInputs);
				}
				else if(input >= -17.3 && input <= 26.9f && input < dentroDeRango)
				{
					SetValores(input, dentroDeRango, total, cantidadInputs);
				}
			}
		}
	}

	std::cout << std::endl;
	std::cout << "Maximo negativo: " << maxNegativo << std::endl;
	std::cout << "Minimo Positivo: " << minPositivo << std::endl; 
	std::cout << "Minimo dentro de rango: " << dentroDeRango << std::endl;
	std::cout << "Promedio: " << total / cantidadInputs << std::endl;
}