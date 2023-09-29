#include <stdio.h>
#include <math.h>

int main() {
    double alturaChico = 1.50; 
    double alturaZe = 1.10;   
    int anos = 0;             

    while (alturaZe <= alturaChico) {
        alturaChico += 0.02;
        alturaZe += 0.03;    
        anos++;              
    }

  
    printf("Vai ser necessario %d anos para que Zé seja mais alto que Chico.\n", anos);
}