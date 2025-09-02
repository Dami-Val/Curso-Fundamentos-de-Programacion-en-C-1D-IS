/*
════════════════════════════════════════════════════════════════════════════════════
  EJERCICIO 4: ENTRADA DE DATOS CON SCANF
  
  OBJETIVO: Practicar la entrada de datos del usuario
  CONCEPTOS: scanf, & (operador de dirección), validación básica
════════════════════════════════════════════════════════════════════════════════════
*/

#include <stdio.h>

int main() {
    // Declarar variables
    char nombre[50];
    int edad;
    float altura;
    char inicial;
    int numeroControl;
    
    // Encabezado
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("                     REGISTRO DE ESTUDIANTE                       \n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("\n");
    
    // Solicitar datos
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                        ENTRADA DE DATOS                        │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("► Ingresa tu nombre completo: ");
    scanf("%49s", nombre);  // Limitar entrada para evitar desbordamiento
    
    printf("► Ingresa tu edad: ");
    scanf("%d", &edad);
    
    printf("► Ingresa tu altura en metros (ej: 1.75): ");
    scanf("%f", &altura);
    
    printf("► Ingresa la inicial de tu apellido: ");
    scanf(" %c", &inicial);  // Espacio antes de %c para consumir whitespace
    
    printf("► Ingresa tu número de control: ");
    scanf("%d", &numeroControl);
    
    // Mostrar resumen
    printf("\n");
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                      RESUMEN DE DATOS                          │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ Nombre: %s\n", nombre);
    printf("▓ Edad: %d años\n", edad);
    printf("▓ Altura: %.2f metros\n", altura);
    printf("▓ Inicial del apellido: %c\n", inicial);
    printf("▓ Número de Control: %d\n", numeroControl);
    printf("\n");
    
    // Análisis simple
    printf("┌─────────────────────────────────────────────────────────────────┐\n");
    printf("│                         ANÁLISIS                               │\n");
    printf("└─────────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    if (edad >= 18) {
        printf("▓ Clasificación: Mayor de edad\n");
    } else {
        printf("▓ Clasificación: Menor de edad\n");
    }
    
    if (altura >= 1.70) {
        printf("▓ Estatura: Arriba del promedio\n");
    } else {
        printf("▓ Estatura: Promedio o menor\n");
    }
    
    printf("\n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    printf("                  ¡Datos registrados exitosamente!               \n");
    printf("═══════════════════════════════════════════════════════════════════\n");
    
    return 0;
}
