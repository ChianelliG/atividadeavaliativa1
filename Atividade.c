#include <stdio.h>
#include <math.h>

int main() {
    double x;
    

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    double resultado;
    if (x * x - 16 < 0) {

        printf("Denominador negativo, raiz indefinida.\n");
    } else {
        resultado = (5 * x + 3) / sqrt(x * x - 16);
        
        printf("f(x) = %.2lf\n", resultado);
    }
    

}