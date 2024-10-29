#include <stdio.h>
int main() {

    printf("Ingrese su nombre: ");
    char nombre[20];
    scanf("%s",nombre);
    printf("Bienvenid@ %s",nombre);
    float A, B, S, R, M, D;
     int opcion;
do {
    printf("\nIngrese el primer valor: \n");
    scanf("%f", &A);
    printf("Ingrese el segundo valor: \n");
    scanf("%f", &B);
     printf("¿Que operacion desea hacer?");
     printf("\n1. Suma");
     printf("\n2. Resta");
     printf("\n3. Multiplicacion");
     printf("\n4. Division");
     printf("\n5. Salir");
     scanf("%d", &opcion);
    
        switch (opcion)
        {
        case 1:  
        S = A + B;
        printf("La suma de los dos valores es: %.2f", S);
        break; 
        
        case 2: 
        R = A - B;
        printf("La resta de los dos valores es: %.2f", R);
        break;
        case 3: 
        M = A * B;
        printf("La multiplicacion de los dos valores es: %.2f", M);
        break;
        case 4:
         if (B != 0){
         	D = A/B; 
        printf("El resultado de la division es: %f",D);
        } else{
            printf("El divisor no puede ser 0");
        
                };
        
        break; 
        
        case 5: 
        printf("Saliendo del programa");
		
		break;
		return 0;    
        };     
    }
	while (opcion != 5);
    return 0;

} 
