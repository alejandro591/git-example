#include <stdio.h>
#include <iostream>
float potencia(float base, int exponente)
{
	float resultado = 1;
	int i;
	for (i = 0; i < exponente; ++i)
	{
		resultado *= base;
	}
	return resultado;
}


int main()
{
	float x, y, resultado;
	char op;
	int valido = 1;

	printf("Ingrese operacion: ");
	scanf_s("%c", &op);
	printf("Ingrese x: ");
	scanf_s("%f", &x);
	printf("Ingrese y: ");
	scanf_s("%f", &y);

	switch (op) {
	case '+':
		resultado = x + y;
		break;
	case '-':
		resultado = x - y;
		break;
	case '*':
	case 'x':
		resultado = x * y;
		break;
	case '/':
		resultado = x / y;
		break;
	case '^':
		resultado = potencia(x, (int)y);
		break;
	default:
		valido = 0;
	}

	if (valido)
		printf("El resultado es %f\n", resultado);
	else
		printf("Operacion invalida\n");

	return 0;
}
