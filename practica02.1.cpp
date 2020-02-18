#include <stdio.h>
#include <stdlib.h>
int main()
{
char opt;
float a,b,c;

printf("A.Suma \nB.Resta \nC.Multiplicacon \nD.Divicion");
printf("\n\nElija una opcion: ");
scanf("%d",&opt);
opt=getchar();

printf("\nAsigne un valor a: ");
scanf("%f",&a);
printf("\nAsigne un valor b: ");
scanf("%f",&b);

switch(opt)
{
case 'A':
case 'a':
c=a+b;
break;

case'B':
case 'b':
c=a-b;
break;

case 'C':
case 'c':
c=a*b;
break;

case 'D':
case 'd':
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
opt=='R';
}
if(opt!='R'){
printf("\nEl resultado es: %f",c);
}

}
