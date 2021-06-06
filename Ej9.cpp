#include <iostream>

// 9. Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. 
// De cada infracción se tomó nota de los siguientes datos :
// - Tipo de Infracción(1, 2, 3, o 4)
// - Motivo de la Infracción
// - Valor de la multa(un entero)
// - Gravedad de la infracción(‘L’, ‘M’, ‘G’)
// Se pide informar al final del proceso :
// • Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
// • La leyenda “Clausurar fabrica” si la cantidad de infracciones 3 y 4 con gravedad “G”
// sean mayor a 3.

int main()
{
	char motivoMulta[100 + 1], gravedad[1 + 1];
	int tipoInfraccionActual, valorMultaActual, valorMultaL = 0, valorMultaM = 0, valorMultaG = 0;
	int infracciones3G = 0, infracciones4G = 0;

	std::cout << "Si quiere parar de ingresar datos escriba -1 en tipo infraccion" << std::endl;
	for (int i = 0; i < 20; i++)
	{
		std::cout << std::endl;
		std::cout << "Ingrese infraccion " << i + 1 << std::endl;
		std::cout << "Tipo infraccion: ";
		std::cin >> tipoInfraccionActual;

		if(tipoInfraccionActual == -1)
			break;

		std::cout << "Valor multa: ";
		std::cin >> valorMultaActual;
		std::cout << "Gravedad infraccion (L, M, G): ";
		std::cin >> gravedad[0];

		if (gravedad[0] == 'L')
			valorMultaL += valorMultaActual;
		else if (gravedad[0] == 'M')
			valorMultaM += valorMultaActual;
		else
			valorMultaG += valorMultaActual;

		if(tipoInfraccionActual == 3 && gravedad[0] == 'G')
			infracciones3G++;
		else if(tipoInfraccionActual == 4 && gravedad[0] == 'G')
			infracciones4G++;

		if(valorMultaG > 3 && infracciones4G > 3)
		{
			std::cout << std::endl;
			std::cout << "CLAUSURAR::FABRICA" << std::endl;
			break;
		}
	}

	std::cout << "Total multa gravedad L: " << valorMultaL << std::endl;
	std::cout << "Total multa gravedad M: " << valorMultaM << std::endl;
	std::cout << "Total multa gravedad G: " << valorMultaG << std::endl;
}