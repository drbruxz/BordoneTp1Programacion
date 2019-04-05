#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

//SUMA entre sí los dos números
int suma (int a, int b) {
    int resp = 0;

    resp = (a+b);
    return resp;
}
//RESTA entre sí los dos números
int resta (int a, int b) {
    int resp =0;
    resp = (a-b);
    return resp;
}

//MULTIPLICA entre sí los dos números
int mult(int a, int b){
    int resp = 0;
    resp = (a*b);
    return resp;
}

//DIVIDE entre sí los dos números el n1 dividido por el n2
int divis (int a, int b){
    int resp = 0;
    resp = (a/b);
    return resp;
}

/* FactA calcula el factorial del primer numero ingresado
FactB calcula el factorial del segundo número ingresado */
int factA(int a){
    int contA;
    int respA = 1;

    for(contA = 1 ; contA <= a ; contA++)
    {
        respA = respA*contA;
    }
    return (respA);

    }

int factB(int b){

    int contB = 0;
    int respB = 1;

    for(contB = 1 ; contB <= b ; contB++)
    {
        respB = respB*contB;
    }
    return (respB);

    }

