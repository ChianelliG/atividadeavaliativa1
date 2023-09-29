#include <stdio.h>
#include <string.h>

int main() {
    int codigoCidade, totalCidades = 0, totalVeiculos = 0, totalAcidentesRS = 0, codigoMaiorIndice, codigoMenorIndice, maiorIndiceAcidentes = -1, menorIndiceAcidentes = -1;
    int numVeiculos, numAcidentes;
    int maiorIndiceAcidentes = -1, menorIndiceAcidentes = -1;
    float totalVeiculos, totalAcidentesRS, mediaVeiculos, mediaAcidentesRS;
    char estado[3];

    for (int i = 1; i <= 200; i++) {
       
        printf("Cidade %d:\n", i);
        printf("Codigo da cidade: ");
        scanf("%d", &codigoCidade);

        if (codigoCidade == 0) {
            break; 
        }

        printf("Estado (2 letras): ");
        scanf("%s", estado);

        printf("Numero de veículos de passeio em 1992: ");
        scanf("%d", &numVeiculos);

        printf("Numero de acidentes de transito com vitimas em 1992: ");
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
        mediaVeiculos = totalVeiculos / totalCidades;
    } else {
        mediaVeiculos = 0;
    }

    
    if (totalAcidentesRS > 0) {
        mediaAcidentesRS = totalAcidentesRS / totalCidades;
    } else {
        mediaAcidentesRS = 0;
    }

    printf("\nResultados:\n");
    printf("a) Maior indice de acidentes de transito: Cidade %d (%d acidentes)\n", codigoMaiorIndice, maiorIndiceAcidentes);
    printf("   Menor indice de acidentes de transito: Cidade %d (%d acidentes)\n", codigoMenorIndice, menorIndiceAcidentes);
    printf("b) Média de veiculos nas cidades brasileiras: %.2f veiculos\n", mediaVeiculos);
    printf("c) Média de acidentes com vitimas no Rio Grande do Sul: %.2f acidentes\n", mediaAcidentesRS);

    return 0;
}