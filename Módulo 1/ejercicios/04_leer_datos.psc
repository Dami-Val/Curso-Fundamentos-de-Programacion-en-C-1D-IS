// Ejercicio 4: Leer Datos del Usuario
// Interacción con el usuario mediante entrada de datos

Algoritmo LeerDatos
    Definir nombre, apellido, ciudad Como Cadena
    Definir edad Como Entero
    Definir estatura Como Real
    
    // Solicitar datos al usuario
    Escribir "=== REGISTRO DE PERSONA ==="
    Escribir "Por favor, ingresa los siguientes datos:"
    Escribir ""
    
    Escribir "¿Cuál es tu nombre?"
    Leer nombre
    
    Escribir "¿Cuál es tu apellido?"
    Leer apellido
    
    Escribir "¿Cuántos años tienes?"
    Leer edad
    
    Escribir "¿Cuál es tu estatura en metros? (ejemplo: 1.70)"
    Leer estatura
    
    Escribir "¿En qué ciudad vives?"
    Leer ciudad
    
    // Mostrar los datos ingresados
    Escribir ""
    Escribir "=== RESUMEN DE DATOS ==="
    Escribir "Nombre completo: ", nombre, " ", apellido
    Escribir "Edad: ", edad, " años"
    Escribir "Estatura: ", estatura, " metros"
    Escribir "Ciudad de residencia: ", ciudad
    Escribir ""
    Escribir "¡Datos registrados exitosamente!"
FinAlgoritmo
