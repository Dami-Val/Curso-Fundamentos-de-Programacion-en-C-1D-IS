/*
════════════════════════════════════════════════════════════════════════════════════
  EJERCICIO 7: PRÁCTICA DE COMPILACIÓN
  
  OBJETIVO: Practicar diferentes opciones de compilación
  CONCEPTOS: gcc, flags de compilación, debugging, warnings
════════════════════════════════════════════════════════════════════════════════════
*/

#include <stdio.h>

// Función con warning intencional (variable no utilizada)
void funcionConWarning() {
    int variableNoUsada = 10;  // Genera warning con -Wall
    printf("Esta función genera un warning\n");
}

int main() {
    // Variables para demostrar diferentes tipos
    int entero = 42;
    float decimal = 3.14159;
    char caracter = 'C';
    
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("                   PRÁCTICA DE COMPILACIÓN                        \n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("\n");
    
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                      DATOS DE PRUEBA                           │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ Entero: %d\n", entero);
    printf("▓ Decimal: %.3f\n", decimal);
    printf("▓ Carácter: %c\n", caracter);
    printf("\n");
    
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                   COMANDOS DE COMPILACIÓN                      │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("Prueba estos comandos de compilación:\n");
    printf("\n");
    printf("1. Compilación básica:\n");
    printf("   gcc 07_practica_compilacion.c -o programa\n");
    printf("\n");
    printf("2. Con todas las advertencias:\n");
    printf("   gcc -Wall 07_practica_compilacion.c -o programa\n");
    printf("\n");
    printf("3. Con información de debugging:\n");
    printf("   gcc -g -Wall 07_practica_compilacion.c -o programa\n");
    printf("\n");
    printf("4. Con estándar específico:\n");
    printf("   gcc -std=c99 -Wall 07_practica_compilacion.c -o programa\n");
    printf("\n");
    printf("5. Optimización nivel 2:\n");
    printf("   gcc -O2 -Wall 07_practica_compilacion.c -o programa\n");
    printf("\n");
    
    // Llamar función que genera warning
    funcionConWarning();
    
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                     INFORMACIÓN DEL SISTEMA                    │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ Tamaño de int: %lu bytes\n", sizeof(int));
    printf("▓ Tamaño de float: %lu bytes\n", sizeof(float));
    printf("▓ Tamaño de char: %lu bytes\n", sizeof(char));
    printf("▓ Tamaño de double: %lu bytes\n", sizeof(double));
    printf("\n");
    
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("                 ¡Práctica de compilación completada!            \n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    
    return 0;
}
