#include<stdio.h>
int main()
{
 int numero, guarda_maior, guarda_menor;
 int i;

 printf("Insira 10 Números: ");
 scanf("%i", &numero);

 guarda_maior=numero;
 guarda_menor=numero;

 for(i=1; i<10; i++)
 {
 printf("\n Coloque o %dº número : ",i+1);
 scanf("%i", &numero);

 if(numero>maior)
 guarda_maior=numero;
 else
 if(numero<menor)
 guarda_menor=numero;
 }


 printf("\nO menor número é: %d", guarda_menor);
 printf("\nO maior número é: %d", guarda_maior);

 return 0;
}
