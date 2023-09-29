#include <stdio.h>

int main() {
    int numeroDeAlunos = 30;
    double notas[numeroDeAlunos][3];
    double medias[numeroDeAlunos];   
    double mediaGeral = 0.0;         

    for (int i = 0; i < numeroDeAlunos; i++) {
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &notas[i][0], &notas[i][1], &notas[i][2]);

        medias[i] = (notas[i][0] * 2 + notas[i][1] * 4 + notas[i][2] * 3) / 10.0;

        mediaGeral += medias[i];
    }

    mediaGeral /= numeroDeAlunos;

    printf("\nMédias e Situação dos Alunos:\n");
    for (int i = 0; i < numeroDeAlunos; i++) {
        printf("Aluno %d - Média: %.2lf - Situação: %s\n", i + 1, medias[i], (medias[i] >= 7.0) ? "Aprovado" : "Reprovado");
    }

    printf("\nMédia Geral da Turma: %.2lf\n", mediaGeral);

}
