#include <stdio.h>

int main() {
    int cantidad, i, j, temp ;

    printf("¿Cuántos números deseas ingresar? ");
    scanf("%d", &cantidad);

   
    if (cantidad <= 0) {
        printf("Por favor, ingresa un número positivo.\n");
     
    }

    int numeros[cantidad]; 

  
    for (i = 0; i < cantidad; i++) {
        printf("Ingresa el número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < cantidad - 1; i++) {
        for (j = 0; j < cantidad - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Mostrar los números ordenados
    printf("\nNúmeros ordenados de menor a mayor:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
