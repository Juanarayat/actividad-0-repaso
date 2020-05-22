#include<stdio.h>
#include <math.h>
#define MAX 5

double factorial_recursivo (  int numero)//5!= 5*4*3*2*1
{
	if(numero!=1)
	{
		return numero*factorial_recursivo(numero-1); 
	}
	else
	{
		return 1;
	}
	
}
///////////////////////////////////////////////
int factorial_iterativo( int numero )
{
  int 	contador=numero;
	while(contador!=1)//5*4=20,20*
	{
		numero=(numero)*(contador-1);	
		contador--;	
	}
	
}
//////////////////////////////////////////////
int arreglo(int numero2, int resultado[MAX],int tam_resultado)
{
	int multiplicando[MAX];
	int i=0,resto=0,multiplicador=0;
	multiplicador=numero2-1;
	 
	while(i<MAX)//iniciando arreglo en 0
	{
		multiplicando[i]=0;
		i++;
	}
	i=0;
	while(numero2!=0)//235%10= 5, 235/10=23 ,23%10=3,23/10=2,  2%10=2,2/10=0; asignando un digito del numero a calcular en cada pos arreglo
	{
		resto =numero2%10;	  
		multiplicando[i]=resto;
		numero2=numero2/10;
		i++;
	}
	
	i=0;
	while(i<MAX)//comprobando asignacion correcta
	{
		printf("arreglo[i]: %d  \n",multiplicando[i]);system("pause");
		i++;	
	}

	while(multiplicador!=1)//15*14=== 5*14=70
	{
		multiplicador--;
	}
	
	return 0;	
}

/////////////////////////////////////////////
void main()
{
   int numero=0,factorial=0;
	printf("ingrese numero numero para calcular su factorial:  \n");
	scanf("%i",&numero);
	numero =factorial_recursivo(numero);
	printf(" el factorial recursivo de : %i , es: ",numero);
	
//	factorial=factorial_iterativo(numero);
//	printf(" el factorial iterativo de : %d , es: %d",numero,factorial);
	
	int resultado[MAX],tam_resultado=0;//act 2 incompleta
	int numero2=0;
	printf("ingrese numero \n");
	scanf("%d",&numero2);
        arreglo(numero2,resultado,tam_resultado);
        "esta linea de codigo se edito de manera remota"
}
/* 
  3)los datos enteros pueden piden memoria para representar numeros de hasta 4 bytes , es decir 32 bits, es decir en binario  a lo mucho 
 se pueden representar numeros de hasta 4.294.967.296 , aproximadamente el limite de calculo de factorial si usamos variables tipo int, el limite de calculo es el factorial
 de 12 , ya que el factorial de 13 es superior al numero que pueden representar en la variable de tipo int.
 3b) la modificacion mas simple , es cambiar el tipo de  variable a uno de mayor capacidad , por ejemplo double o long




*/
