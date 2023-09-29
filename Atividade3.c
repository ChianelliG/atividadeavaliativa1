#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;

 
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

  
    if (A + B > C && A + C > B && B + C > A) {

        if (A == B && B == C) {
            printf("Eh um triangulo equilatero.\n");
        }

        else if (A == B || B == C || A == C) {
            printf("Eh um triangulo isosceles.\n");
        }
 
        else {
            printf("Eh um triangulo escaleno.\n");
        }
    } else {
        printf("Nao eh um triangulo.\n");
    }


}