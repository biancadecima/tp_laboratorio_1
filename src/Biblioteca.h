/*
 * Biblioteca.h
 *
 */
#include <stdio.h>
#include <stdlib.h>

/// @fn Función que pide el ingreso de un numero y lo valida dentro de un rango.
/// @param Mensaje que indica el tipo de dato que el usuario debe ingresar
/// @return Numero entero ingresado y validado
int PedirNumero(char mensaje[]);

/// @fn Función que permite calcular el precio del viaje con un descuento del %10
/// @param El precio del viaje ingresado/hardcodeado
/// @return Numero entero resultado del calculo
float CalcularDebito (int precioViaje);

/// @fn Función que permite calcular el precio del viaje con un interés del %25
/// @param El precio del viaje ingresado/hardcodeado
/// @return Numero entero resultado del calculo
float CalcularCredito (int precioViaje);

/// @fn Función que permite calcular el precio del viaje en bitcoins (1BTC -> 4606954.55 Pesos Argentinos)
/// @param El precio del viaje ingresado/hardcodeado
/// @return Numero flotante resultado del calculo
float CalcularBitcoin (int precioViaje);

/// @fn Función que permite calcular el precio del viaje por km
/// @param El precio del viaje ingresado/hardcodeado
/// @param La cantidad de km ingresado/hardcodeado
/// @return Numero flotante resultado del calculo
float CalcularUnitario (int precioViaje, int kmTotales);

/// @fn Función que permite calcular la diferencia de precio del viaje entre las dos aerolineas
/// @param El precio del viaje en Aerolineas ingresado/hardcodeado
/// @param El precio del viaje en Latam ingresado/hardcodeado
/// @return Numero entero resultado del calculo
float CalcularDiferencia (int precioAerolineas, int precioLatam);

/// @fn Función que pregunta al usuario si desea contiuar utilizando el programa
/// @return Si devuelve 1, se muestra al usuario el menu. Si devuelve 0, se despide al usuario.
int ConfirmarNavegacion ();
