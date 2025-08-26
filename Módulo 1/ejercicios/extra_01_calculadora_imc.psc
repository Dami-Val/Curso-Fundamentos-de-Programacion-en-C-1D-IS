// Ejercicio Extra 1: Calculadora de IMC
// Proyecto adicional para practicar

Algoritmo CalculadoraIMC
    Definir peso, estatura, imc Como Real
    Definir nombre Como Cadena
    
    Escribir "=== CALCULADORA DE ÍNDICE DE MASA CORPORAL ==="
    Escribir "¿Cuál es tu nombre?"
    Leer nombre
    
    Escribir "Hola ", nombre, ", vamos a calcular tu IMC"
    Escribir "Ingresa tu peso en kilogramos:"
    Leer peso
    
    Escribir "Ingresa tu estatura en metros (ejemplo: 1.75):"
    Leer estatura
    
    // Calcular IMC
    imc <- peso / (estatura ^ 2)
    
    Escribir ""
    Escribir "=== RESULTADOS ==="
    Escribir "Nombre: ", nombre
    Escribir "Peso: ", peso, " kg"
    Escribir "Estatura: ", estatura, " m"
    Escribir "Tu IMC es: ", imc
    Escribir ""
    
    // Clasificar según el IMC
    Escribir "Clasificación:"
    Si imc < 18.5 Entonces
        Escribir "🔹 Peso bajo - Se recomienda consultar un nutricionista"
    SiNo
        Si imc <= 24.9 Entonces
            Escribir "✅ Peso normal - ¡Felicidades, mantén tus hábitos!"
        SiNo
            Si imc <= 29.9 Entonces
                Escribir "⚠️ Sobrepeso - Considera una dieta balanceada y ejercicio"
            SiNo
                Escribir "🔴 Obesidad - Se recomienda consultar un médico"
            FinSi
        FinSi
    FinSi
FinAlgoritmo
