/*Práctica_Progreso1
Camila Flores
25/04/2023
Mostar en pantalla los primeros 20 multiplos de 3*/

#include <stdio.h>

// Definimos una función llamada imprimirMultiplosDeTres
void imprimirMultiplosDeTres() {
    int num = 0; // Inicializamos la variable num en 0
    printf("Multiplos de 3\n"); // Imprimimos el título
    
    // Utilizamos un bucle for para imprimir 20 múltiplos de 3
    for (int i = 0; i < 20; i++) {
        num = num + 3; 
        printf("-"); 
        printf("%d", num); 
    }
}

int main() {
    imprimirMultiplosDeTres(); 
    return 0; 
}