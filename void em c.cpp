#include <stdio.h>
#include <stdlib.h>
void soma ()
{
float num1, num2, total;
printf("Digite o primeiro numero :");
scanf ("%f", &num1);
printf("Digite o segundo numero :");
scanf ("%f", &num2);
total = num1+num2;
printf ("A soma e %.2f", total);
}
main ()
{
 system("cls");
soma();
}
