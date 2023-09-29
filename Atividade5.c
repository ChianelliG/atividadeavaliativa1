#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double distancia;

    printf("Digite as coordenadas do ponto P1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite as coordenadas do ponto P2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos P1 e P2 eh %.4lf\n", distancia);

}