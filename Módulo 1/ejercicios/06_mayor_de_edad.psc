// Ejercicio 6: Condicionales - Mayor de Edad
// Uso de estructuras Si...Entonces...SiNo

Algoritmo MayorDeEdad
    Definir edad Como Entero
    Definir nombre Como Cadena
    
    Escribir "=== VERIFICADOR DE MAYORÍA DE EDAD ==="
    Escribir "¿Cuál es tu nombre?"
    Leer nombre
    
    Escribir "¿Cuántos años tienes?"
    Leer edad
    
    Escribir ""
    Escribir "Hola ", nombre, ","
    
    Si edad >= 18 Entonces
        Escribir "Tienes ", edad, " años, por lo tanto eres MAYOR DE EDAD"
        Escribir "Puedes votar, manejar y tomar decisiones legales"
    SiNo
        Escribir "Tienes ", edad, " años, por lo tanto eres MENOR DE EDAD"
        Escribir "Te faltan ", 18 - edad, " años para ser mayor de edad"
    FinSi
    
    // Condicional adicional para diferentes rangos de edad
    Si edad < 13 Entonces
        Escribir "Clasificación: Niño/a"
    SiNo
        Si edad < 18 Entonces
            Escribir "Clasificación: Adolescente"
        SiNo
            Si edad < 65 Entonces
                Escribir "Clasificación: Adulto/a"
            SiNo
                Escribir "Clasificación: Adulto/a mayor"
            FinSi
        FinSi
    FinSi
FinAlgoritmo
