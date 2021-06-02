#include <iostream>

// Realizar la suma de todos los números pares entre 2 y 10000

int main()
{
	int number = 0;

	for(int i = 2; i < 10000; i++)
	{
		if(i % 2 == 0)
		{
			number += i;
		}
	}

	std::cout << "El numerito es: " << number << std::endl;
}