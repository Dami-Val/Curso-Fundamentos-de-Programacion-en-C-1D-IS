/*
════════════════════════════════════════════════════════════════════════════════════
  EJERCICIO 3: VARIABLES BÁSICAS EN C
  
  OBJETIVO: Practicar declaración, inicialización y uso de variables
  CONCEPTOS: int, float, char, printf con especificadores de formato
════════════════════════════════════════════════════════════════════════════════════
*/

#include <stdio.h>

int main() {
    // Declaración e inicialización de variables
    int edad = 20;
    float altura = 1.75;
    char inicial = 'J';
    int numeroControl = 12345;
    float promedio = 9.5;
    
    // Mostrar información
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("                    MANEJO DE VARIABLES EN C                      \n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("\n");
    
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                      DATOS PERSONALES                          │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ Inicial del nombre: %c\n", inicial);
    printf("▓ Edad: %d años\n", edad);
    printf("▓ Altura: %.2f metros\n", altura);
    printf("\n");
    
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                      DATOS ACADÉMICOS                          │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ Número de Control: %d\n", numeroControl);
    printf("▓ Promedio actual: %.1f\n", promedio);
    printf("\n");
    
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                    INFORMACIÓN TÉCNICA                         │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ Tipo de variable 'edad': int (%lu bytes)\n", sizeof(edad));
    printf("▓ Tipo de variable 'altura': float (%lu bytes)\n", sizeof(altura));
    printf("▓ Tipo de variable 'inicial': char (%lu bytes)\n", sizeof(inicial));
    printf("\n");
    
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("              Variables declaradas y utilizadas correctamente     \n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    
    return 0;
}
