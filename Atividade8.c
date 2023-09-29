#include <stdio.h>
#include <math.h>

int main() {
    double salario, maiorSalario = 0.0, somaSalario = 0.0, somaFilhos = 0.0, percentualSalarioAte100, mediaFilhos, mediaSalario;
    int numFilhos, totalPessoas = 0, totalSalarioAte100 = 0;


    do {

        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);

        if (salario >= 0) {

            totalPessoas++;


            somaSalario += salario;


            if (salario > maiorSalario) {
                maiorSalario = salario;
            }


            printf("Digite o número de filhos: ");
            scanf("%d", &numFilhos);


            somaFilhos += numFilhos;


            if (salario <= 100.0) {
                totalSalarioAte100++;
            }
        }
    } while (salario >= 0);

    if (totalPessoas > 0) {

         mediaSalario = somaSalario / totalPessoas;

  
         mediaFilhos = somaFilhos / totalPessoas;

    
         percentualSalarioAte100 = totalSalarioAte100 / totalPessoas * 100.0;

        printf("a) Média do salário da população: %.2lf\n", mediaSalario);
        printf("b) Média do número de filhos: %.2lf\n", mediaFilhos);
        printf("c) Maior salário: %.2lf\n", maiorSalario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentualSalarioAte100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

}
