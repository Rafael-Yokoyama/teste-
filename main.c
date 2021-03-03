
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*Criar um algoritmo que receba varios numeros inteiros e positivos e imprima a media dos numeros multiplos de 3.
 A execucao deve encerrar quando um numero nao positivos for lido.*/

main()
{
 int num, soma=0;
 float media=0, cont=0;
 printf("\n DIGITE UM NUMERO INTEIRO: ");
 scanf("%d",&num);
 if(num %3==0 && num!=0)
 {
 soma=soma+num;
 cont++;
 }
 while(num > 0)
{
 printf("\n DIGITE UM NUMERO INTEIRO: ");
 scanf("%d",&num);

 if(num %3==0 && num!=0)
 {
 soma=soma+num;
 cont++;
 }}
 media=soma/cont;
 printf("\n\n A media dos numeros e: %1.0f ",media);
 printf("\n\n");
 system("pause");
 return(0);

}
