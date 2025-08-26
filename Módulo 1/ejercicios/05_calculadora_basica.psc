// Ejercicio 5: Calculadora Básica
// Operaciones matemáticas fundamentales

Algoritmo CalculadoraBasica
    Definir num1, num2 Como Real
    Definir suma, resta, multiplicacion, division, potencia Como Real
    
    // Solicitar números
    Escribir "=== CALCULADORA BÁSICA ==="
    Escribir "Ingresa el primer número:"
    Leer num1
    
    Escribir "Ingresa el segundo número:"
    Leer num2
    
    // Realizar operaciones
    suma <- num1 + num2
    resta <- num1 - num2
    multiplicacion <- num1 * num2
    division <- num1 / num2
    potencia <- num1 ^ 2  // num1 al cuadrado
    
    // Mostrar resultados
    Escribir ""
    Escribir "=== RESULTADOS ==="
    Escribir "Suma: ", num1, " + ", num2, " = ", suma
    Escribir "Resta: ", num1, " - ", num2, " = ", resta
    Escribir "Multiplicación: ", num1, " × ", num2, " = ", multiplicacion
    
    Si num2 <> 0 Entonces
        Escribir "División: ", num1, " ÷ ", num2, " = ", division
    SiNo
        Escribir "División: No se puede dividir entre cero"
    FinSi
    
    Escribir "Potencia: ", num1, "² = ", potencia
FinAlgoritmo
