// Ejercicio Extra 2: Contador de Números Pares
// Práctica adicional con ciclos y condicionales

Algoritmo ContadorPares
    Definir i, contador, limite Como Entero
    
    Escribir "=== CONTADOR DE NÚMEROS PARES ==="
    Escribir "¿Hasta qué número quieres contar los pares?"
    Leer limite
    
    contador = 0
    
    Escribir ""
    Escribir "Números pares del 1 al ", limite, ":"
    Escribir "================================"
    
    Para i = 1 Hasta limite Con Paso 1 Hacer
        Si i % 2 = 0 Entonces
            Escribir i, " es par"
            contador = contador + 1
        FinSi
    FinPara
    
    Escribir ""
    Escribir "=== RESUMEN ==="
    Escribir "Total de números pares encontrados: ", contador
    Escribir "Rango analizado: 1 al ", limite
    
    Si contador > 0 Entonces
        Escribir "¡Se encontraron números pares en el rango!"
    SiNo
        Escribir "No se encontraron números pares en el rango."
    FinSi
FinAlgoritmo
