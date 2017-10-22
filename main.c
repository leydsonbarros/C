/*Graduando em Engenharia da Computação, Técnico em Eletrônica e em Redes de Computadores. 
Pessoa apaixonada por tecnologia e amante da patinação.:)*/

#include <stdio.h>
#include <stdlib.h>

int totalApagar(int taxa, int metroCubico)
{

    int intervalo1 = 20;
    int intervalo2 = 70;
    int total = 0;
    int i = 0;
    int flag = 0;
    int metroCubicoReal = metroCubico - 10;

    //printf("%d\n", taxa);
    //printf("%d\n", metroCubico);
    // Teste para verificar se passou da franquia

    if(metroCubico <= 10)
    {

        total = taxa;
        flag = 1;
        printf("estive aqui");



    }

    //Teste para o intervalo de 11 a 30

    //printf("%d\n",metroCubicoReal);

    if(metroCubicoReal - intervalo1 >= 0 && flag == 0)
    {
        //printf("%d \n",metroCubicoReal - intervalo1);
        //printf("%d\n", taxa);
        total = (20*1);
        printf("%d\n",total );
        metroCubicoReal = metroCubicoReal - intervalo1;


    }
    else if(metroCubicoReal - intervalo1 < 0 && flag == 0)
    {
        for(i = 0; i < metroCubicoReal; i++)
        {

            total = total + 1;
            

        }

        flag = 1;  
        
     


    }


    // Teste ṕara o intervalo 2 -> 31 a 100

   if(metroCubicoReal - intervalo2 >= 0 && flag == 0)
    {

        total = total + intervalo2*2;
        metroCubicoReal = metroCubicoReal - intervalo2;


    }
    else if(metroCubicoReal - intervalo2 < 0 )
    {
        for(i = 0; i < metroCubicoReal; i++)
        {

            total = total + 2;


        }

        flag == 1;

    }

    // Teste ṕara o intervalo 3



    if(metroCubico - (intervalo1 + intervalo2) >= 0)
    {

        for(i = 0; i < (metroCubico - (intervalo1 + intervalo2 + 10)); i++ )
        {

            total = total + 5;

        }


    }

     //printf("%d\n",total );

    

    return total + taxa;


}

int main()
{
    int taxa = 7;
    int metroCubico;
    int valor;

    printf("Digite o valor do Metro cubico consumido\n");
    scanf("%d", &metroCubico);

    valor = totalApagar(taxa, metroCubico);

    printf("Total a pagar %d", valor);

    return 0;
}
