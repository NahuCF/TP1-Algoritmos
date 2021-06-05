#include <iostream>

// 15. Dado un conjunto de valores enteros, calcular e informar a) cuantos valores cero hubo,
// b) promedio de valores positivos, c) sumatoria de valores negativos.
// Resolver el ejercicio para los siguientes lotes de datos :
// a. 167 valores enteros
// b.N valores, donde el valor de N debe ser leido previamente
// c.El conjunto de valores termina con un valor igual al anterior
// d.Se dan N valores, pero el proceso deberá finalizar si se procesan todos los
// valores o si la cantidad de ceros supera a cuatro
// e.Se dan N valores, pero el proceso deberá finalizar si se cumple alguna de las
// condiciones d) o si el promedio de positivos resulta mayor que seis


// ---Nota-----
// Estas funciones a retornar nan si el 
// denominador es 0

void EjercicioA()
{
	float valores[167],
		valores0 = 0, 
		sumaValoresPositivos = 0, 
		contadorValoresPositivos = 0,
		sumaValoresNegativos = 0;

	// No voy ni a permitir rellenar inputs a mano
	// asi que no va a haber forma de comprobar si 
	// esta parte del ejercio anda :)
	for(int i = 0; i < 167; i++)
		valores[i] = 2;

	std::cout << std::endl;
	for(int i = 0; i < 167; i++)
	{
		if(valores[i] == 0)
		{
			valores0++;
		}
		else if(valores[i] > 0)
		{
			sumaValoresPositivos += valores[i];
			contadorValoresPositivos++;
		}
		else
		{
			sumaValoresNegativos += valores[i];
		}
	}

	std::cout << std::endl;
	std::cout << "Total valores 0: " << valores0 << std::endl;
	std::cout << "Promedio valores positivos: " << sumaValoresPositivos / contadorValoresPositivos << std::endl;
	std::cout << "Suma valores negativos: " << sumaValoresNegativos << std::endl;
}

void EjercicioB(int nValores)
{
	float valor,
		valores0 = 0,
		sumaValoresPositivos = 0,
		contadorValoresPositivos = 0,
		sumaValoresNegativos = 0;

	std::cout << std::endl;
	for (int i = 0; i < nValores; i++)
	{
		std::cout << "Ingrese el valor " << i + 1 << ": ";
		std::cin >> valor;

		if (valor == 0)
		{
			valores0++;
		}
		else if(valor > 0)
		{
			sumaValoresPositivos += valor;
			contadorValoresPositivos++;
		}
		else
		{
			sumaValoresNegativos += valor;
		}
	}

	std::cout << std::endl;
	std::cout << "Total valores 0: " << valores0 << std::endl;
	std::cout << "Promedio valores positivos: " << sumaValoresPositivos / contadorValoresPositivos << std::endl;
	std::cout << "Suma valores negativos: " << sumaValoresNegativos << std::endl;
}

void EjercicioC(int nValores)
{
	float valor,
		valores0 = 0,
		sumaValoresPositivos = 0,
		contadorValoresPositivos = 0,
		sumaValoresNegativos = 0;

	std::cout << std::endl;
	for (int i = 0; i < nValores - 1; i++)
	{
		std::cout << "Ingrese el valor " << i + 1 << ": ";
		std::cin >> valor;

		if (valor == 0)
		{
			valores0++;
		}
		else if (valor > 0)
		{
			sumaValoresPositivos += valor;
			contadorValoresPositivos++;
		}
		else
		{
			sumaValoresNegativos += valor;
		}
	}

	valor = nValores; // El "ultimo" valor es nValores
	if(valor == 0)
	{
		valores0++;
	}
	else if(valor > 0)
	{
		sumaValoresPositivos += valor;
		contadorValoresPositivos++;
	}
	else
	{
		sumaValoresNegativos += valor;
	}

	std::cout << std::endl;
	std::cout << "Total valores 0: " << valores0 << std::endl;
	std::cout << "Promedio valores positivos: " << sumaValoresPositivos / contadorValoresPositivos << std::endl;
	std::cout << "Suma valores negativos: " << sumaValoresNegativos << std::endl;
}

void EjercicioD(int nValores)
{
	float valor,
		valores0 = 0,
		sumaValoresPositivos = 0,
		contadorValoresPositivos = 0,
		sumaValoresNegativos = 0;

	std::cout << std::endl;
	for(int i = 0; i < nValores; i++)
	{
		std::cout << "Ingrese el valor " << i + 1 << ": ";
		std::cin >> valor;

		if(valor == 0)
		{
			valores0++;
		}
		else if(valor > 0)
		{
			sumaValoresPositivos += valor;
			contadorValoresPositivos++;
		}
		else
		{
			sumaValoresNegativos += valor;
		}

		if(valores0 > 4)
			break;
	}

	std::cout << std::endl;
	std::cout << "Total valores 0: " << valores0 << std::endl;
	std::cout << "Promedio valores positivos: " << sumaValoresPositivos / contadorValoresPositivos << std::endl;
	std::cout << "Suma valores negativos: " << sumaValoresNegativos << std::endl;
}

void EjercicioE(int nValores)
{
	float valor,
		valores0 = 0,
		sumaValoresPositivos = 0,
		contadorValoresPositivos = 0,
		sumaValoresNegativos = 0;

	for(int i = 0; i < nValores; i++)
	{
		std::cout << "Ingrese el valor " << i + 1 << ": ";
		std::cin >> valor;

		if(valor == 0)
		{
			valores0++;
		}
		else if (valor > 0)
		{
			sumaValoresPositivos += valor;
			contadorValoresPositivos++;
		}
		else
		{
			sumaValoresNegativos += valor;
		}
	}

	std::cout << std::endl;
	if(valores0 > 4 || sumaValoresPositivos / contadorValoresPositivos > 6)
	{
		std::cout << "Total valores 0: " << valores0 << std::endl;
		std::cout << "Promedio valores positivos: " << sumaValoresPositivos / contadorValoresPositivos << std::endl;
		std::cout << "Suma valores negativos: " << sumaValoresNegativos << std::endl;
	}
	else
	{
		std::cout << "No se cumplieron las condiciones :C" << std::endl;
	}
}

int main()
{
	char letraEjercicio[1 + 1];
	int nValores;

	std::cout << "Ingrese la letra en minuscula de la parte del ejercicio que quiere ejecutar: ";
	std::cin >> letraEjercicio;

	if (letraEjercicio[0] == 'a')
	{
		EjercicioA();
		std::cout << "El ejercicio no especifica que tengamos que recibir inputs asi que simplemente itere en un array (un conjunto)" << std::endl;
	}
	else if (letraEjercicio[0] == 'b')
	{
		std::cout << "Ingrese el N valores: ";
		std::cin >> nValores;
		EjercicioB(nValores);
	}
	else if (letraEjercicio[0] == 'c')
	{
		std::cout << "Ingrese el N valores: ";
		std::cin >> nValores;
		EjercicioC(nValores);
	}
	else if(letraEjercicio[0] == 'd')
	{
		std::cout << "Ingrese el N valores: ";
		std::cin >> nValores;
		EjercicioD(nValores);
	}
	else if(letraEjercicio[0] == 'e')
	{
		std::cout << "Ingrese el N valores: ";
		std::cin >> nValores;
		EjercicioE(nValores);
	}
}