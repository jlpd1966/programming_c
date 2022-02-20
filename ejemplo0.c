#include<stdio.h>
/* Calcula la tabla de multiplicar desde el 1 hasta el número introducido.*/
int main()
{
    int tope=0;
    int result=0;
    int contador1=1,contador2=1;

    printf("Introduzca número máximo tabla multiplicar:");
    scanf("%d",&tope);

    while (contador1 <= tope)
    {
        printf("TABLA MULTIPLICAR DEL %d \n",contador1);
        printf("#########################\n");
        // Calcula tabla multiplicar de contador1
        for (contador2=1;contador2<=10;contador2++)
        {
            printf ("%d por %d es %d\n", contador1,contador2,contador1*contador2);
        }
        contador1++;
        printf("\n\n");
    }
    return 0;




}