/* Incrementar el salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior */

#include <iostream>
#include <stdint.h>
#include <math.h>

int main() {
    float salario_anterior, salario_nuevo, aumento = 1.25;

    printf("Introduzca el salario anterior del obrero: \n");
    scanf("%f", &salario_anterior);

    salario_nuevo = salario_anterior*aumento;

    printf("El salario nuevo que tendra el obrero es: %.2f ", salario_nuevo);


    return 0;
}
