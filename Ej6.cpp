#include <iostream>

// 6. Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas :
//		- ‘menor’ si la edad es menor o igual a 12
//		- ‘cadete’ si la edad esta comprendida entre 13 y 18
//		- ‘juvenil’ si la edad es mayor que 18 y no supera los 26

int main()
{
	int edad;
	
	std::cout << "Ingrese la edad: ";
	std::cin >> edad;

	std::cout << std::endl;

	if(edad <= 12)
		std::cout << "Menor" << std::endl;
	else if (edad >= 13 && edad <= 18)
		std::cout << "Cadete" << std::endl;
	else if (edad > 18 && edad <= 26)
		std::cout << "Juvenil" << std::endl;
}