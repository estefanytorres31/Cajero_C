/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
 int main ()
 {
  int clave;
  printf("BIENVENIDO AL CAJERO AUTOMATICO\n");
  printf( "\nIngrese la clave: ");
  scanf("%d",&clave);
  while (clave != 1234)
    {
      printf("Error, clave incorrecta\n");
      printf("Introduzca la clave correcta: ");
      scanf("%d",&clave);
      printf("----------------\n");
    }
   printf("Clave correcta.\n");
   printf("BIENVENIDO USUARIO");

  float fondos = 5000;
  int tarjeta;
  int eleccion;
  while (tarjeta!=4){
  	printf("\nOPCIONES \n");
      printf("1. Tarjeta de debito\n2. Tarjeta de credito\n3. Cambiar de clave\n4. Salir\nSeleccione la opcion: \n");
      scanf("%d",&tarjeta);
      if (tarjeta== 1){
  while (eleccion != 4)
    {
        printf("TARJETA DE DEBITO\n");
      printf("OPCIONES\n");
      printf("1. Retirar dinero\n2. Depositar dinero\n3. Mostrar saldo\n4. Salir\nSeleccione la opcion: \n");
      scanf("%d",&eleccion);
      
      //  Retiro
      if (eleccion == 1)
	{
	    int tipocambio;
	    float retiro;
	    printf("RETIRO DE DINERO\n");
	    printf( "1. Soles\n");
		printf("2. Dolares\n");

	  printf( "Ingrese el tipo de cambio (soles o dolares): \n");
	  scanf("%d",&tipocambio);
	  if (tipocambio == 1)
	    {
	      fondos = fondos;
	      printf("CUENTA EN SOLES\n");
	      printf("Saldo actual en dolares es de: S/.%f",fondos);
	      printf( "\nIngrese cantidad a retirar: ");
	      scanf("%f",&retiro);
	      if (retiro > fondos || retiro <= 0)
		{
		 printf("No puede retirar esa cantidad\n");
		}
	      else
		{
	    printf( "OK. Ha retirado: S/.%f",retiro);
		  fondos = fondos - retiro;
		printf( "\nSaldo actual en soles es de: S/.%f" ,fondos);
		}
	    }


	  if (tipocambio == 2)
	    {
	        printf("\nCUENTA EN DOLARES");
	      fondos = fondos / 3.8;
	      printf("\nSaldo actual en dolares es de: $%f",fondos);
	      printf( "\nIngrese cantidad a retirar: ");
	      scanf("%f",&retiro);
	      if (retiro > fondos || retiro <= 0)
		{
		  printf("No puede retirar esa cantidad\n");
		  fondos=fondos*3.8;
		}
	      else
		{
		  printf( "OK. Ha retirado: $%f",retiro);
		  fondos = fondos - retiro;
		  printf( "\nSaldo actual en dolares es de: $%f" ,fondos);
		  fondos = fondos * 3.8;
		  printf( "\nSaldo actual en soles es de: S/.%f" ,fondos);
		}
	    }
	    printf( "----------------\n" );
	}
      //Deposito
      if (eleccion == 2)
	{
	  int tipocambio;
	  float deposito;
	  printf("DEPOSITO DE DINERO");
	  printf("\n1. Soles");
	  printf( "\n2. Dolares");
	  printf("\nIngrese el tipo de cambio (soles o dolares): " );
	  scanf("%d",&tipocambio);

	  if (tipocambio == 1)
	    {
	      fondos = fondos;
	      printf("CUENTA EN SOLES");
	      printf( "\nSaldo actual en soles es de: S/.%f",fondos);
	      printf("\nIngrese cantidad a depositar: ");
          scanf("%f",&deposito);	      
		  printf("\nOK. Ha depositado: S/.%f",deposito);
	      fondos = fondos + deposito;
	      printf("\nSaldo actual en soles es de: S/.%f",fondos);
	    }
	  if (tipocambio == 2)
	    {
	        printf("CUENTA EN DOLARES");
	      fondos = fondos / 3.8;
	      printf("\nSaldo actual en dolares es de: $%f",fondos);
	      printf( "\nIngrese cantidad a depositar: ");
	      scanf("%f",&deposito);
	      printf( "OK. Ha depositado: $%f",deposito);
	      fondos = fondos + deposito;
	      printf("\nSaldo actual en dolares es de: $%f",fondos);
	      fondos = fondos * 3.8;
	      printf("\nSaldo actual en soles es de: S/.%f",fondos);
	    }
	    printf( "----------------\n");
	}
      if (eleccion == 3)
	{
	  //Mostrando saldo
	  printf("SALDO EN LA CUENTA DEL USUARIO\n");
	  fondos = fondos / 3.8;
	  printf( "Su saldo actual en dolares es de: $%f",fondos);
	  fondos = fondos * 3.8;
	  printf( "\nSu saldo actual en soles es de: S/.%f", fondos);
	  printf( "----------------\n");
	}
    }

}
if (tarjeta== 2){
    float linea=10000;
  while (eleccion != 3)
    {
      printf("\nTARJETA DE CREDITO");
      printf("\nOPCIONES");
      printf("\n1. Adelanto en efectivo\n2. Mostrar linea crediticia\n3. Salir\nSeleccione la opcion: \n");
      scanf("%d",&eleccion);
      if (eleccion == 1)
	{
	    float adelanto;
		printf("ADELANTO EN EFECTIVO\n");
		printf("Intruzca el monto que necesita: \n");
		scanf("%f",&adelanto);
		linea=linea-adelanto;
		printf("\nSe le ha prestado S/.%f",adelanto);
		printf(" y se le ha descontado de su linea crediticia.");
		printf("\nYa puede retirar el dinero.");
	}
	if (eleccion==2)
	{
	    printf("\nSu linea crediticia es de: S/.%f",linea);
	    
	}
}
}
if (tarjeta==3){
  while (eleccion != 2)
    {
      printf("\nCAMBIO DE CLAVE");
      printf("\nOPCIONES");
      printf("\n1. Cambiar la clave\n2. Salir\nSeleccione la opcion: \n");
      scanf("%d",&eleccion);
      if (eleccion == 1)
	{
	int nuevo;
	printf("CAMBIO DE CLAVE");
    printf("\nIntroduzca nueva clave: ");
    scanf("%d",&nuevo);
    clave=nuevo;
    printf("\nSu clave es: %d",clave);
}
}
}
}
  return 0;
}