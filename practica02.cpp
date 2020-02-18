#include <stdio.h>

int main()
{
int opt;
float a,b,c;

printf("1.Suma \n2.Resta \n3.Multiplicacon \n4.Divicion");
printf("\n\nElija una opcion: ");
scanf("%d",&opt);

printf("\nAsigne un valor a: ");
scanf("%f",&a);
printf("\nAsigne un valor b: ");
scanf("%f",&b);

switch(opt)
{
case 1:
c=a+b;
break;

case 2:
c=a-b;
break;

case 3:
c=a*b;
break;

case 4:
while(b==0)
        {
printf("El valor de b no es valido");
printf("\nAsigne un valor b: ");
scanf("%f",&b);
        }
printf("\nEl resutado de la divicion es: %f",c=a/b);
break;

default:
printf("\nOpcion incorrecta!!");
}
printf("\nEl resultado es: %f",c);
}
