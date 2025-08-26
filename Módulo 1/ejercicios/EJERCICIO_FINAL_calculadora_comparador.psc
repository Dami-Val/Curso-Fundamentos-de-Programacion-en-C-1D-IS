// EJERCICIO FINAL DEL MÓDULO 1
// Calculadora con Comparador - Proyecto integrador

Algoritmo CalculadoraConComparador
    // Declarar variables
    Definir num1, num2 Como Real
    Definir suma, resta, multiplicacion, division, potencia1, potencia2 Como Real
    Definir i, resultado Como Entero
    
    // Solicitar datos
    Escribir "🔢 CALCULADORA CON COMPARADOR 🔢"
    Escribir "=================================="
    Escribir "Este programa realizará operaciones básicas,"
    Escribir "comparará la suma con 10 y mostrará una tabla."
    Escribir ""
    
    Escribir "Ingresa el primer número:"
    Leer num1
    
    Escribir "Ingresa el segundo número:"
    Leer num2
    
    // Realizar operaciones básicas
    suma = num1 + num2
    resta = num1 - num2
    multiplicacion = num1 * num2
    division = num1 / num2
    potencia1 = num1 ^ 2
    potencia2 = num2 ^ 2
    
    // Mostrar resultados de operaciones
    Escribir ""
    Escribir "📊 OPERACIONES BÁSICAS:"
    Escribir "======================="
    Escribir "Suma: ", num1, " + ", num2, " = ", suma
    Escribir "Resta: ", num1, " - ", num2, " = ", resta
    Escribir "Multiplicación: ", num1, " × ", num2, " = ", multiplicacion
    
    Si num2 <> 0 Entonces
        Escribir "División: ", num1, " ÷ ", num2, " = ", division
    SiNo
        Escribir "División: No se puede dividir entre cero"
    FinSi
    
    Escribir "Potencia del primer número: ", num1, "² = ", potencia1
    Escribir "Potencia del segundo número: ", num2, "² = ", potencia2
    
    // Comparar la suma con 10
    Escribir ""
    Escribir "🔍 COMPARACIÓN CON 10:"
    Escribir "====================="
    Escribir "La suma de los números es: ", suma
    
    Si suma > 10 Entonces
        Escribir "✅ La suma (", suma, ") es MAYOR que 10"
        Escribir "¡Los números sumados superan el valor de referencia!"
    SiNo
        Si suma < 10 Entonces
            Escribir "⬇️ La suma (", suma, ") es MENOR que 10"
            Escribir "Los números sumados no alcanzan el valor de referencia."
        SiNo
            Escribir "🎯 La suma (", suma, ") es IGUAL a 10"
            Escribir "¡Exactamente en el valor de referencia!"
        FinSi
    FinSi
    
    // Mostrar tabla de multiplicar del primer número (del 1 al 5)
    Escribir ""
    Escribir "📈 TABLA DEL ", num1, " (del 1 al 5):"
    Escribir "=========================="
    
    Para i = 1 Hasta 5 Con Paso 1 Hacer
        resultado = num1 * i
        Escribir num1, " × ", i, " = ", resultado
    FinPara
    
    // Mensaje final
    Escribir ""
    Escribir "🎉 ¡PROGRAMA COMPLETADO EXITOSAMENTE! 🎉"
    Escribir "Has utilizado todas las herramientas del Módulo 1:"
    Escribir "✓ Variables y tipos de datos"
    Escribir "✓ Entrada y salida de datos"
    Escribir "✓ Operaciones matemáticas"
    Escribir "✓ Estructuras condicionales"
    Escribir "✓ Ciclos Para"
    Escribir ""
    Escribir "¡Felicidades por completar tu primer proyecto!"
FinAlgoritmo
