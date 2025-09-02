/*
════════════════════════════════════════════════════════════════════════════════════
  EJERCICIO 6: OPERACIONES CON BIBLIOTECA MATH
  
  OBJETIVO: Utilizar la biblioteca math.h para operaciones avanzadas
  CONCEPTOS: pow(), sqrt(), math.h, compilación con -lm
  
  COMPILACIÓN: gcc ejercicio6.c -o ejercicio6 -lm
════════════════════════════════════════════════════════════════════════════════════
*/

#include <stdio.h>
#include <math.h>

int main() {
    double base, exponente;
    double numero;
    double potencia, raizCuadrada;
    
    // Encabezado
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("                  OPERACIONES MATEMÁTICAS AVANZADAS               \n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("\n");
    
    // Solicitar datos para potencia
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                         POTENCIAS                              │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("► Ingresa la base: ");
    scanf("%lf", &base);
    
    printf("► Ingresa el exponente: ");
    scanf("%lf", &exponente);
    
    potencia = pow(base, exponente);
    
    printf("\n▓ %.2f elevado a %.2f = %.2f\n", base, exponente, potencia);
    
    // Casos especiales de potencias
    printf("\n┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                    POTENCIAS ESPECIALES                        │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ %.2f² = %.2f\n", base, pow(base, 2));
    printf("▓ %.2f³ = %.2f\n", base, pow(base, 3));
    printf("▓ 2^%.0f = %.2f\n", exponente, pow(2, exponente));
    printf("▓ 10^%.0f = %.2f\n", exponente, pow(10, exponente));
    
    // Raíz cuadrada
    printf("\n┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                      RAÍCES CUADRADAS                          │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("► Ingresa un número para calcular su raíz cuadrada: ");
    scanf("%lf", &numero);
    
    if (numero >= 0) {
        raizCuadrada = sqrt(numero);
        printf("\n▓ √%.2f = %.2f\n", numero, raizCuadrada);
        
        // Verificación
        printf("▓ Verificación: %.2f² = %.2f\n", raizCuadrada, pow(raizCuadrada, 2));
    } else {
        printf("\n▓ ERROR: No se puede calcular la raíz cuadrada de un número negativo\n");
    }
    
    // Otras funciones matemáticas
    printf("\n┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                 FUNCIONES MATEMÁTICAS ADICIONALES              │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    if (numero >= 0) {
        printf("▓ Valor absoluto de %.2f: %.2f\n", numero, fabs(numero));
        printf("▓ Parte entera de %.2f: %.0f\n", numero, floor(numero));
        printf("▓ Redondeo de %.2f: %.0f\n", numero, round(numero));
        printf("▓ Techo de %.2f: %.0f\n", numero, ceil(numero));
    }
    
    // Tabla de potencias
    printf("\n┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                     TABLA DE POTENCIAS                         │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("Base: %.0f\n", base);
    printf("─────────────────────────\n");
    for (int i = 1; i <= 5; i++) {
        printf("%.0f^%d = %.2f\n", base, i, pow(base, i));
    }
    
    printf("\n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("              ¡Operaciones matemáticas avanzadas completadas!     \n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    
    return 0;
}
