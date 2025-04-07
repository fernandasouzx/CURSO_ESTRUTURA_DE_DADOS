#include <stdio.h>
#include <stdlib.h>


//exemplo de recursao

int potencia(int base , int exp){
    if(exp == 1){
        return base;

    }
    return base *potencia(base, exp-1);
}

int main(){

    int resultado = potencia(2,4); //resultado 16
    printf("Potencia = %d\n", resultado);
    return 0;
}