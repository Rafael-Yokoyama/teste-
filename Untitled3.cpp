#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Autor: Ruben Alves do Nascimento
  Contato: rubenanapu@hotmail.com  
  Site: http://www.seculoinfo.com    
*/
main(){
       char c,texto[212];
       int a=0;
       double d;
       printf("\n\tEste programa permite digitar apenas numeros. No maximo 10 caracteres\n\nDigite: ");
       //OBS: 10 caracteres � a quantidade m�xima que uma vari�vel DOUBLE suporta
       do{
       c=getch();         //Armazena o que foi digitado na vari�vel c
       if(isdigit(c)&&a<10){         //isdigit(c) analisa se c � um d�gito - n�mero
           texto[a]=c;
           printf("%c",texto[a]);
           a++;
           }
       else if(c==8&&a){         //8 � o Back Space na tabela ASCII
           a--;
           texto[a]='\0';
           printf("\b \b");    //Apagando o que foi digitado pelo Usu�rio
           }
       else if (c!=13)printf("\a");        //Soa um beep
       }while(c!=13);                      //13 � o ENTER na tabela ASCII
       texto[a]='\0';
       d=atol(texto);                      //atol(texto) converte a vari�vel texto para DOUBLE
       printf("\n\nO numero e %.0lf \n\n",d);            //lf significa Long Float e imprime DOUBLE.
system("pause");
}
