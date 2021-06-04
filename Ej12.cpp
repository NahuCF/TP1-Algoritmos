#include <iostream>

// 12. Dado un conjunto de Nombres y Fechas de nacimientos(AAAAMMDD), que finaliza
// con un Nombre = ‘FIN’, informar el nombre de la persona con mayor edad y el de la
// mas joven. Utilizar la función strcmp(<cstring>) para evaluar fin de datos


int main()
{
	char nombre[30 + 1], masJoven[30 + 1], masVieja[30 + 1];
	long int fechaActual = 0, fechaMasViejo = 0, fechaMasJoven = 0;
	
	while(true)
	{
		std::cout << "Nombre: ";
		std::cin >> nombre;
		if(strcmp(nombre, "Fin") == 0)
			break;
		std::cout << "Fecha: ";
		std::cin >> fechaActual;

		// Les pongo un valor para poder comparar si 
		// no se lo habia puesto antes
		if(fechaMasJoven == 0)
		{
			fechaMasJoven = fechaActual;
			strcpy_s(masJoven, nombre);
		}
		if(fechaMasViejo == 0)
		{
			fechaMasViejo = fechaActual;
			strcpy_s(masVieja, nombre);
		}
			
		// Realizo las validaciones de edad
		if(fechaActual - fechaMasViejo < 0) // La persona ingresada es mayor que la que la mas vieja
		{
			fechaMasViejo = fechaActual;
			strcpy_s(masVieja, nombre);
		}
		else if(fechaActual - fechaMasJoven > 0) // La persona ingresada es menor que la mas joven
		{
			fechaMasJoven = fechaActual;
			strcpy_s(masJoven, nombre);
		}
	}
	
	std::cout << std::endl;
	std::cout << "Persona mayor: " << masVieja << std::endl;
	std::cout << "Persona menor: " << masJoven << std::endl;
}