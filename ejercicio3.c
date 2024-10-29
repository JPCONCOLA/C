#include <stdio.h>

int main(){

    char asgignaturas[5];
    float notas[5];
    
asgignaturas[0] = "Matematicas";
asgignaturas[1] = "Fisica";
asgignaturas[2] = "Quimica";
asgignaturas[3] = "Historia";
asgignaturas[4] = "Lengua";


    int i;
    for (i = 0; i < 5; i++) {
        printf("¿Cuál es tu nota en %s? ", asgignaturas[i]);
        scanf("5f", notas[i]);

        if (notas[i] < 5){
            printf("Repite %s\n", asgignaturas[i]);
        }
    


}