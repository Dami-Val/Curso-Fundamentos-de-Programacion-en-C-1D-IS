/*
════════════════════════════════════════════════════════════════════════════════════
  EJERCICIO 5: OPERACIONES MATEMÁTICAS BÁSICAS
  
  OBJETIVO: Implementar operaciones aritméticas fundamentales
  CONCEPTOS: +, -, *, /, %, operadores de asignación
════════════════════════════════════════════════════════════════════════════════════
*/

#include <stdio.h>

int main() {
    float num1, num2;
    float suma, resta, multiplicacion, division;
    int entero1, entero2, modulo;
    
    // Encabezado
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("                    OPERACIONES MATEMÁTICAS                       \n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("\n");
    
    // Solicitar números decimales
    printf("► Ingresa el primer número decimal: ");
    scanf("%f", &num1);
    
    printf("► Ingresa el segundo número decimal: ");
    scanf("%f", &num2);
    
    // Realizar operaciones básicas
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    
    // Mostrar resultados de operaciones básicas
    printf("\n");
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                    OPERACIONES BÁSICAS                         │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ %.2f + %.2f = %.2f\n", num1, num2, suma);
    printf("▓ %.2f - %.2f = %.2f\n", num1, num2, resta);
    printf("▓ %.2f × %.2f = %.2f\n", num1, num2, multiplicacion);
    
    if (num2 != 0.0) {
        printf("▓ %.2f ÷ %.2f = %.2f\n", num1, num2, division);
    } else {
        printf("▓ División: ERROR - No se puede dividir entre cero\n");
    }
    
    // Operación módulo con enteros
    printf("\n");
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                      OPERACIÓN MÓDULO                          │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    // Convertir a enteros para módulo
    entero1 = (int)num1;
    entero2 = (int)num2;
    
    printf("► Conversión a enteros: %.2f → %d, %.2f → %d\n", 
           num1, entero1, num2, entero2);
    
    if (entero2 != 0) {
        modulo = entero1 % entero2;
        printf("▓ %d %% %d = %d (residuo de la división)\n", 
               entero1, entero2, modulo);
        
        if (modulo == 0) {
            printf("▓ %d es divisible entre %d\n", entero1, entero2);
        } else {
            printf("▓ %d NO es divisible entre %d\n", entero1, entero2);
        }
    } else {
        printf("▓ Módulo: ERROR - No se puede calcular módulo con divisor cero\n");
    }
    
    // Análisis adicional
    printf("\n");
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                       ANÁLISIS                                 │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ El número mayor es: %.2f\n", (num1 > num2) ? num1 : num2);
    printf("▓ El número menor es: %.2f\n", (num1 < num2) ? num1 : num2);
    printf("▓ Promedio: %.2f\n", (num1 + num2) / 2);
    printf("▓ Diferencia absoluta: %.2f\n", 
           (num1 > num2) ? (num1 - num2) : (num2 - num1));
    
    printf("\n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("                  ¡Operaciones completadas!                      \n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    
    return 0;
}
