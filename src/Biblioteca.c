/*
 * Biblioteca.c
 */
#include "Biblioteca.h"
#include <stdio.h>
#include <stdlib.h>

int PedirNumero(char mensaje[])
{
	int numero;

	printf("%s",mensaje);
	scanf("%d",&numero);
	while(numero<1){
		printf("Ingresar valor valido: ");
		scanf("%d",&numero);}
	return numero;
}

float CalcularDebito(int precioViaje)
{
	float resultadoDebito;

	resultadoDebito = precioViaje * 0.9;
	return resultadoDebito;
}

float CalcularCredito(int precioViaje)
{
	float resultadoCredito;

	resultadoCredito = precioViaje + (precioViaje * 0.25);
	return resultadoCredito;
}

float CalcularBitcoin(int precioViaje)
{
	float resultadoBitcoin;

	resultadoBitcoin = precioViaje / 4606954.55;
	return resultadoBitcoin;
}

float CalcularUnitario(int precioViaje, int kmTotales)
{
	float resultadoUnitario;

	resultadoUnitario = precioViaje / kmTotales;
	return resultadoUnitario;
}

float CalcularDiferencia (int precioAerolineas, int precioLatam){
	float resultadoDiferencia;

	resultadoDiferencia = precioLatam - precioAerolineas;
	return resultadoDiferencia;
}

int ConfirmarNavegacion ()
{
	int continuar;

	printf("Para continuar pulse el número 1...\n");
	scanf("%d",&continuar);
	if(continuar!=1){
		continuar=0;
		printf("Gracias por usar el programa\n");}
	else{
		continuar=1;}

	return continuar;
}
