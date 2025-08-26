// Ejercicio 3: Variables Básicas
// Declaración y uso de variables

Algoritmo VariablesBasicas
    // Declarar variables de diferentes tipos
    Definir nombre Como Cadena
    Definir edad Como Entero
    Definir altura Como Real
    Definir esMayorDeEdad Como Logico
    
    // Asignar valores
    nombre = "María González"
    edad = 20
    altura = 1.65
    esMayorDeEdad = Verdadero
    
    // Mostrar valores
    Escribir "=== INFORMACIÓN PERSONAL ==="
    Escribir "Nombre: ", nombre
    Escribir "Edad: ", edad, " años"
    Escribir "Altura: ", altura, " metros"
    
    Si esMayorDeEdad Entonces
        Escribir "Estado: Mayor de edad"
    SiNo
        Escribir "Estado: Menor de edad"
    FinSi
FinAlgoritmo
