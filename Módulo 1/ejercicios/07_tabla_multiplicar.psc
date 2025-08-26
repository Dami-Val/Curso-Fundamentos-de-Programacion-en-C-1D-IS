// Ejercicio 7: Ciclo Para - Tabla de Multiplicar
// Uso de ciclos para repetir operaciones

Algoritmo TablaMultiplicar
    Definir numero, i, resultado Como Entero
    
    Escribir "=== TABLA DE MULTIPLICAR ==="
    Escribir "¿De qué número quieres ver la tabla de multiplicar?"
    Leer numero
    
    Escribir ""
    Escribir "Tabla del ", numero, ":"
    Escribir "===================="
    
    Para i <- 1 Hasta 10 Con Paso 1 Hacer
        resultado = numero * i
        Escribir numero, " × ", i, " = ", resultado
    FinPara
    
    Escribir ""
    Escribir "¡Tabla completada!"
FinAlgoritmo
