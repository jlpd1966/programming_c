#include<stdio.h>

// Pide una cantidad float y la transforma en cantidad de monedas de 2,1,0.5,0.2,0.1,0.05,0.02, y 0.01 euros.
int main() 
{
int moneda200=0;
int moneda100=0;
int moneda50=0;
int moneda20=0;
int moneda10=0;
int moneda5=0;
int moneda2=0;
int moneda1=0;

float resto=0;

float cantidad=0;
printf("introduzca numero: \n");
scanf("%f", &cantidad);
resto=cantidad;
printf("la cantidad introducida es %f:\n",cantidad);

if (resto>=2)
{
   moneda200=resto/2;
   resto=resto-(moneda200*2);
}
if (resto>=1)
{
   moneda100=resto/1;
   resto=resto-(moneda100*1);
}
if (resto>=0.5)
{
   moneda50=resto/0.5;
   resto=resto-(moneda50*0.5);
}

if (resto>=0.2)
{
   moneda20=resto/0.2;
   resto=resto-(moneda20*0.2);
}

if (resto>=0.1)
{
   moneda10=resto/0.1;
   resto=resto-(moneda10*0.1);
}

if (resto>=0.05)
{
   moneda5=resto/0.05;
   resto=resto-(moneda5*0.05);
}

if (resto>=0.02)
{
   moneda2=resto/0.02;
   resto=resto-(moneda2*0.02);
}

if (resto>=0.01)
{
   moneda1=resto/0.01;
   resto=resto-(moneda1*0.01);
}


printf("%d monedas de 2 euros\n",moneda200);
printf("%d monedas de 1 euros\n",moneda100);
printf("%d monedas de 0.5 euros\n",moneda50);
printf("%d monedas de 0.2 euros\n",moneda20);
printf("%d monedas de 0.1 euros\n",moneda10);
printf("%d monedas de 0.05 euros\n",moneda5);
printf("%d monedas de 0.02 euros\n",moneda2);
printf("%d monedas de 0.01 euros\n",moneda1);

return 0;
}