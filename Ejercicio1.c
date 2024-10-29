#include <stdio.h>


int main() {
   
    char matematicas[] = "Matemáticas";
    char fisica[] = "Física";
    char quimica[] = "Química";
    char historia[] = "Historia";
    char lengua[] = "Lengua";
    int notas[5];

    printf("¿Cuál es tu nota en %s? ", matematicas);
    scanf("%d", &notas[0]);

    printf("¿Cuál es tu nota en %s? ", fisica);
    scanf("%d", &notas[1]);

    printf("¿Cuál es tu nota en %s? ", quimica);
    scanf("%d", &notas[2]);

    printf("¿Cuál es tu nota en %s? ", historia);
    scanf("%d", &notas[3]);

    printf("¿Cuál es tu nota en %s? ", lengua);
    scanf("%d", &notas[4]);

    printf("\nResultados:\n");
    printf("En %s has sacado %d\n", matematicas, notas[0]);
    printf("En %s has sacado %d\n", fisica, notas[1]);
    printf("En %s has sacado %d\n", quimica, notas[2]);
    printf("En %s has sacado %d\n", historia, notas[3]);
    printf("En %s has sacado %d\n", lengua, notas[4]);

    return 0;
}
/*

int main() {
    
    char *asignaturas[5][11] = {"Matemáticas", "Física", "Química", "Historia", "Lengua"};
    int notas[5];
    int num_asignaturas = 5;

    for (int i = 0; i < num_asignaturas; i++) {
        printf("¿Cuál es tu nota en %s? ", asignaturas[i]);
        scanf("%d", &notas[i]);
    }

 }
    printf("\nResultados:\n");
    for (int i = 0; i < num_asignaturas; i++) {
        printf("En %s has sacado %d\n", asignaturas[i], notas[i]);
    }

    return 0;
}

*/