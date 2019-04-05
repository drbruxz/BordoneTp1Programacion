#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

int n1 = 0;
int n2 = 0;

int resultSuma= 0;
int resultResta = 0;
int resultDivis = 0;
int resultMult = 0;
int resultFactA = 0;
int resultFactB = 0;

char oper;

int main()

{

    printf("Ingrese primer operando \n");
    scanf ("%d", &n1);

    printf("Ingrese segundo operando \n");
    scanf("%d", &n2);


    system("cls");

        resultSuma = suma(n1, n2);
        printf("El resultado de %d + %d: %d\n", n1, n2, resultSuma);



        resultResta= resta(n1,n2);
        printf("El resultado de %d - %d: %d\n", n1, n2, resultResta);



        resultMult = mult(n1,n2);
        printf("El resultado de %d * %d : %d\n", n1, n2, resultMult);



        if(n2==0)
        {
            printf("ERROR: Imposible dividir por 0\n");
        }
        else{
        resultDivis = divis(n1,n2);
        printf("El resultado de %d / %d es %d\n", n1, n2, resultDivis);
        }




        resultFactA=factA(n1);
        resultFactB=factB(n2);
        printf("El factorial de %d es %d y el de %d es %d",n1,resultFactA,n2,resultFactB);




    return 0;

}






