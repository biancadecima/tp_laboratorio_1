#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main(){
	setbuf(stdout, NULL);

	int menuOpcion;
	int kmTotales;
	int precioAerolineas;
	int precioLatam;
	int continuar;
	int flagKilometros=0;
	int flagPrecios=0;
	int kmHardcode = 7090;
	int precioAerolineasHardcode = 162965;
	int precioLatamHardcode = 159339;
	float precioLatamDebito;
	float precioLatamCredito;
	float precioLatamBitcoin;
	float precioLatamUnitario;
	float precioAerolineasDebito;
	float precioAerolineasCredito;
	float precioAerolineasBitcoin;
	float precioAerolineasUnitario;
	float diferenciaPrecio;
	float precioLatamDebitoHardcode;
	float precioLatamCreditoHardcode;
	float precioLatamBitcoinHardcode;
	float precioLatamUnitarioHardcode;
	float precioAerolineasDebitoHardcode;
	float precioAerolineasCreditoHardcode;
	float precioAerolineasBitcoinHardcode;
	float precioAerolineasUnitarioHardcode;
	float diferenciaPrecioHardcode;

	do{
		printf("1.Ingresar km totales \n");
		printf("2.Ingresar precio de vuelos \n");
		printf("3.Calcular costos \n");
		printf("4.Informar resultados \n");
		printf("5.Carga forzada de datos \n");
		printf("6.Salir\n\n");
		printf("Elija una opcion: ");
		scanf("%d",&menuOpcion);

		switch(menuOpcion){
		case 1:
			kmTotales = PedirNumero("\n1.Ingresar km totales: ");
			continuar = ConfirmarNavegacion();
			flagKilometros = 1;
		break;
		case 2:
			if(flagKilometros==0){
				printf("Es necesario ingresar kilometros del viaje para continuar\n");
				ConfirmarNavegacion ();}
			else{
				printf("\n2.Ingresar precio de vuelos ");
				precioAerolineas = PedirNumero("\n- Precio vuelo Aerolineas: ");
				precioLatam = PedirNumero("\n- Precio vuelo Latam: ");
				continuar = ConfirmarNavegacion();
				flagPrecios=1;}
		break;
		case 3: //Calcular todos los costos
			if(flagKilometros==0 || flagPrecios==0){
				printf("Es necesario ingresar kilometros y precios del viaje para continuar\n");
				ConfirmarNavegacion ();}
			else{
				printf("3.Calcular costos \n");
					printf("a.Tarjeta de debito\n");
					printf("b.Tarjeta de credito\n");
					printf("c.Bitcoin\n");
					printf("d.Precio por km \n");
					printf("e.Diferencia de precio ingresada \n\n");
				continuar = ConfirmarNavegacion();}
		break;
		case 4: //Informar Resultados:
			if(flagKilometros==0 || flagPrecios==0){
				printf("Es necesario ingresar kilometros y precios del viaje para continuar\n");
				ConfirmarNavegacion ();}
			else{
				printf("Latam: \n");
					precioLatamDebito = CalcularDebito(precioLatam);
					printf("- Precio con tarjeta de debito: %.2f\n",precioLatamDebito);
					precioLatamCredito = CalcularCredito(precioLatam);
					printf("- Precio con tarjeta de credito: %.2f\n",precioLatamCredito);
					precioLatamBitcoin = CalcularBitcoin(precioLatam);
					printf("- Precio pagando en bitcoin: %f\n",precioLatamBitcoin);
					precioLatamUnitario = CalcularUnitario(precioLatam, kmTotales);
					printf("- Precio unitario: %.2f\n\n",precioLatamUnitario);
				printf("Aerolineas: \n");
					precioAerolineasDebito = CalcularDebito(precioAerolineas);
					printf("- Precio con tarjeta de debito: %.2f\n",precioAerolineasDebito);
					precioAerolineasCredito = CalcularCredito(precioAerolineas);
					printf("- Precio con tarjeta de credito: %.2f\n",precioAerolineasCredito);
					precioAerolineasBitcoin = CalcularBitcoin(precioAerolineas);
					printf("- Precio pagando en bitcoin: %f\n",precioAerolineasBitcoin);
					precioAerolineasUnitario = CalcularUnitario(precioAerolineas, kmTotales);
					printf("- Precio unitario: %.2f\n\n",precioAerolineasUnitario);
				diferenciaPrecio = CalcularDiferencia(precioLatam, precioAerolineas);
				printf("Diferencia de precio: %.2f\n\n",diferenciaPrecio);
				continuar = ConfirmarNavegacion();}
		break;
		case 5://Carga forzada de datos
				printf("Km de viaje: %d\n\n",kmHardcode);
				printf("Latam: \n");
					precioLatamDebitoHardcode = CalcularDebito(precioLatamHardcode);
					printf("- Precio con tarjeta de debito: %.2f\n",precioLatamDebitoHardcode);
					precioLatamCreditoHardcode = CalcularCredito(precioLatamHardcode);
					printf("- Precio con tarjeta de credito: %.2f\n",precioLatamCreditoHardcode);
					precioLatamBitcoinHardcode = CalcularBitcoin(precioLatamHardcode);
					printf("- Precio pagando en bitcoin: %f\n",precioLatamBitcoinHardcode);
					precioLatamUnitarioHardcode = CalcularUnitario(precioLatamHardcode, kmHardcode);
					printf("- Precio unitario: %.2f\n\n",precioLatamUnitarioHardcode);
				printf("Aerolineas: \n");
					precioAerolineasDebitoHardcode = CalcularDebito(precioAerolineasHardcode);
					printf("- Precio con tarjeta de debito: %.2f\n",precioAerolineasDebitoHardcode);
					precioAerolineasCreditoHardcode = CalcularCredito(precioAerolineasHardcode);
					printf("- Precio con tarjeta de credito: %.2f\n",precioAerolineasCreditoHardcode);
					precioAerolineasBitcoinHardcode = CalcularBitcoin(precioAerolineasHardcode);
					printf("- Precio pagando en bitcoin: %f\n",precioAerolineasBitcoinHardcode);
					precioAerolineasUnitarioHardcode = CalcularUnitario(precioAerolineasHardcode, kmHardcode);
					printf("- Precio unitario: %.2f\n\n",precioAerolineasUnitarioHardcode);
				diferenciaPrecioHardcode = CalcularDiferencia(precioLatamHardcode, precioAerolineasHardcode);
				printf("Diferencia de precio: %.2f\n\n",diferenciaPrecioHardcode);
				continuar = ConfirmarNavegacion();
		break;
		case 6:
			printf("Gracias por usar el programa\n");
			continuar=0;
			break;
		default:
			printf("La opcion ingresada no es valida\n");
			continuar = ConfirmarNavegacion();
		}
	}while(continuar==1);
	return EXIT_SUCCESS;
}
