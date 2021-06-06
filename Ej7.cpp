#include <iostream>

// 7. Calcular la velocidad(metros / segundo) de los participantes de una carrera de 1500mts
// dado el tiempo en segundos en recorrerla y determinar el nombre del mas veloz. Y si el
// tiempo fuera en minutos + segundos ?

int main()
{
	char masVelozNombre[50 + 1], nombreActual[50 + 1];
	int segundosDelMasVeloz = 0, segundosActuales = 0;

	std::cout << "Cuando no quiera ingresar valores escriba: terminar" << std::endl;
	while(true)
	{
		std::cout << "Ingrese el nombre del corredor: ";
		std::cin >> nombreActual;

		if(strcmp(nombreActual, "terminar") == 0)
			break;

		std::cout << "Ingrese los segundos que tardo en recorrer: ";
		std::cin >> segundosActuales;

		if(segundosActuales < segundosDelMasVeloz || segundosDelMasVeloz == 0)
		{
			segundosDelMasVeloz = segundosActuales;
			strcpy_s(masVelozNombre, nombreActual);
		}
	}

	std::cout << std::endl;
	std::cout << "Participante mas veloz: " << masVelozNombre << std::endl;
	std::cout << "Minutos: " << segundosDelMasVeloz / 60 << " Segundos: " << segundosDelMasVeloz % 60 << std::endl;;
 }