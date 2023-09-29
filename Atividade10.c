#include <stdio.h>
#include <string.h>

int main() {
    int codigoCidade, totalCidades = 0;
    char estado[3];
    int numVeiculos, numAcidentes;
    int maiorIndiceAcidentes = -1, menorIndiceAcidentes = -1;
    int codigoMaiorIndice, codigoMenorIndice;
    int totalVeiculos = 0, totalAcidentesRS = 0;
    
    float mediaVeiculos, mediaAcidentesRS;

    for (int i = 1; i <= 200; i++) {
       
        printf("Cidade %d:\n", i);
        printf("Código da cidade: ");
        scanf("%d", &codigoCidade);

        if (codigoCidade == 0) {
            break; 
        }

        printf("Estado (2 letras): ");
        scanf("%s", estado);

        printf("Número de veículos de passeio em 1992: ");
        scanf("%d", &numVeiculos);

        printf("Número de acidentes de trânsito com vítimas em 1992: ");
        scanf("%d", &numAcidentes);

        
        totalVeiculos += numVeiculos;

        
        if (strcmp(estado, "RS") == 0) {
            totalAcidentesRS += numAcidentes;
        }

        
        if (maiorIndiceAcidentes == -1 || numAcidentes > maiorIndiceAcidentes) {
            maiorIndiceAcidentes = numAcidentes;
            codigoMaiorIndice = codigoCidade;
        }
        if (menorIndiceAcidentes == -1 || numAcidentes < menorIndiceAcidentes) {
            menorIndiceAcidentes = numAcidentes;
            codigoMenorIndice = codigoCidade;
        }

        totalCidades++;
    }

   
    if (totalCidades > 0) {
        mediaVeiculos = (float)totalVeiculos / totalCidades;
    } else {
        mediaVeiculos = 0;
    }

    
    if (totalAcidentesRS > 0) {
        mediaAcidentesRS = (float)totalAcidentesRS / totalCidades;
    } else {
        mediaAcidentesRS = 0;
    }

    printf("\nResultados:\n");
    printf("a) Maior índice de acidentes de trânsito: Cidade %d (%d acidentes)\n", codigoMaiorIndice, maiorIndiceAcidentes);
    printf("   Menor índice de acidentes de trânsito: Cidade %d (%d acidentes)\n", codigoMenorIndice, menorIndiceAcidentes);
    printf("b) Média de veículos nas cidades brasileiras: %.2f veículos\n", mediaVeiculos);
    printf("c) Média de acidentes com vítimas no Rio Grande do Sul: %.2f acidentes\n", mediaAcidentesRS);

    return 0;
}
