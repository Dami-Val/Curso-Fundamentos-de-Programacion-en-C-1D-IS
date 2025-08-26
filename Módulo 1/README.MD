# 📚 Módulo 1: PSeInt - Fundamentos de Lógica de Programación

<div align="center">
  <img src="https://img.shields.io/badge/Semana%201-PSeInt%20(Lógica%20base)-37F740?style=for-the-badge&logo=code&logoColor=white" alt="Módulo 1" />
  <br>
  <img src="https://img.shields.io/badge/Nivel-Principiante-green?style=plastic&logo=star&logoColor=white" alt="Nivel" />
  <img src="https://img.shields.io/badge/Duración-1%20Semana-blue?style=plastic&logo=calendar&logoColor=white" alt="Duración" />
  <img src="https://img.shields.io/badge/Ejercicios-6+-orange?style=plastic&logo=code&logoColor=white" alt="Ejercicios" />
</div>

## 🎯 Objetivo del Módulo

Entender la **lógica de programación** sin preocuparnos aún por la sintaxis complicada. PSeInt nos permite concentrarnos en el **pensamiento algorítmico** y la **resolución de problemas** de manera visual e intuitiva.

## 📋 Contenido del Módulo

### 🔹 Temas Principales:
- ✅ **Escribir** (imprimir en pantalla)
- ✅ **Variables** (entero, real, cadena)
- ✅ **Leer** (escanear datos del usuario)
- ✅ **Operaciones matemáticas**: suma, resta, multiplicación, división, potencia al cuadrado
- ✅ **Condicionales**: Si ... Entonces
- ✅ **Ciclos**: Para

### 🚀 Lo que aprenderás:
- Cómo estructurar un algoritmo
- Manejo básico de variables y tipos de datos
- Interacción con el usuario (entrada y salida)
- Lógica condicional para toma de decisiones
- Repetición de procesos con ciclos

---

## 📖 Lección 1: Introducción a PSeInt

### ¿Qué es PSeInt?
**PSeInt** (PSeudo Intérprete) es una herramienta educativa para aprender los **fundamentos de la programación** mediante pseudocódigo. Nos permite escribir algoritmos en español de manera sencilla y visual.

### Instalación de PSeInt
1. Descarga PSeInt desde: [https://pseint.sourceforge.net/](https://pseint.sourceforge.net/)
2. Instala siguiendo las instrucciones
3. Abre PSeInt y familiarízate con la interfaz

---

## 📖 Lección 2: Tu Primer Programa - "Hola Mundo"

### Estructura Básica de un Algoritmo

```pseudocode
Algoritmo HolaMundo
    Escribir "¡Hola Mundo! Bienvenido a la programación"
FinAlgoritmo
```

### 🔍 Explicación:
- `Algoritmo NombreDelAlgoritmo`: Inicia el programa
- `Escribir "texto"`: Muestra texto en pantalla
- `FinAlgoritmo`: Termina el programa

### 💡 Ejercicio Práctico 1:
Crear un programa que muestre tu nombre y edad:

```pseudocode
Algoritmo MiPresentacion
    Escribir "Hola, mi nombre es [Tu Nombre]"
    Escribir "Tengo [Tu Edad] años"
    Escribir "Estoy aprendiendo programación"
FinAlgoritmo
```

---

## 📖 Lección 3: Variables y Tipos de Datos

### ¿Qué son las Variables?
Las **variables** son "cajas" donde guardamos información que puede cambiar durante la ejecución del programa.

### Tipos de Variables en PSeInt:

| Tipo | Descripción | Ejemplo |
|------|-------------|---------|
| **Entero** | Números sin decimales | 5, -10, 0, 100 |
| **Real** | Números con decimales | 3.14, -2.5, 0.0 |
| **Cadena** | Texto entre comillas | "Hola", "Juan", "123abc" |

### Declaración y Uso de Variables

```pseudocode
Algoritmo VariablesBasicas
    // Declarar variables
    Definir nombre Como Cadena
    Definir edad Como Entero
    Definir altura Como Real
    
    // Asignar valores
    nombre <- "María"
    edad <- 20
    altura <- 1.65
    
    // Mostrar valores
    Escribir "Nombre: ", nombre
    Escribir "Edad: ", edad, " años"
    Escribir "Altura: ", altura, " metros"
FinAlgoritmo
```

### 💡 Ejercicio Práctico 2:
Crear un programa que declare variables para almacenar información de un estudiante:

```pseudocode
Algoritmo DatosEstudiante
    Definir nombreEstudiante Como Cadena
    Definir numeroControl Como Entero
    Definir promedio Como Real
    
    nombreEstudiante <- "Ana González"
    numeroControl <- 12345
    promedio <- 9.5
    
    Escribir "=== DATOS DEL ESTUDIANTE ==="
    Escribir "Nombre: ", nombreEstudiante
    Escribir "Número de Control: ", numeroControl
    Escribir "Promedio: ", promedio
FinAlgoritmo
```

---

## 📖 Lección 4: Entrada de Datos - Leer

### Interacción con el Usuario
Para que nuestros programas sean dinámicos, necesitamos **leer datos** que ingrese el usuario.

```pseudocode
Algoritmo LeerDatos
    Definir nombre Como Cadena
    Definir edad Como Entero
    
    // Solicitar datos al usuario
    Escribir "¿Cuál es tu nombre?"
    Leer nombre
    
    Escribir "¿Cuántos años tienes?"
    Leer edad
    
    // Mostrar los datos leídos
    Escribir "Hola ", nombre, ", tienes ", edad, " años"
FinAlgoritmo
```

### 💡 Ejercicio Práctico 3:
Programa que pida datos personales y los muestre organizados:

```pseudocode
Algoritmo RegistroPersona
    Definir nombre, apellido, ciudad Como Cadena
    Definir edad Como Entero
    Definir estatura Como Real
    
    Escribir "=== REGISTRO DE PERSONA ==="
    Escribir "Ingresa tu nombre:"
    Leer nombre
    
    Escribir "Ingresa tu apellido:"
    Leer apellido
    
    Escribir "Ingresa tu edad:"
    Leer edad
    
    Escribir "Ingresa tu estatura (en metros):"
    Leer estatura
    
    Escribir "Ingresa tu ciudad:"
    Leer ciudad
    
    Escribir ""
    Escribir "=== RESUMEN ==="
    Escribir "Nombre completo: ", nombre, " ", apellido
    Escribir "Edad: ", edad, " años"
    Escribir "Estatura: ", estatura, " m"
    Escribir "Ciudad: ", ciudad
FinAlgoritmo
```

---

## 📖 Lección 5: Operaciones Matemáticas

### Operadores Básicos en PSeInt

| Operador | Operación | Ejemplo | Resultado |
|----------|-----------|---------|-----------|
| `+` | Suma | `5 + 3` | 8 |
| `-` | Resta | `10 - 4` | 6 |
| `*` | Multiplicación | `6 * 7` | 42 |
| `/` | División | `15 / 3` | 5 |
| `^` | Potencia | `2 ^ 3` | 8 |

### Ejemplo Completo de Calculadora Básica

```pseudocode
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
    Escribir num1, " + ", num2, " = ", suma
    Escribir num1, " - ", num2, " = ", resta
    Escribir num1, " * ", num2, " = ", multiplicacion
    Escribir num1, " / ", num2, " = ", division
    Escribir num1, " ^ 2 = ", potencia
FinAlgoritmo
```

### 💡 Ejercicio Práctico 4:
Crear una calculadora de área y perímetro de un rectángulo:

```pseudocode
Algoritmo AreaPerimetroRectangulo
    Definir base, altura, area, perimetro Como Real
    
    Escribir "=== CALCULADORA DE RECTÁNGULO ==="
    Escribir "Ingresa la base del rectángulo:"
    Leer base
    
    Escribir "Ingresa la altura del rectángulo:"
    Leer altura
    
    // Calcular área y perímetro
    area <- base * altura
    perimetro <- 2 * (base + altura)
    
    Escribir ""
    Escribir "=== RESULTADOS ==="
    Escribir "Base: ", base
    Escribir "Altura: ", altura
    Escribir "Área: ", area
    Escribir "Perímetro: ", perimetro
FinAlgoritmo
```

---

## 📖 Lección 6: Estructuras Condicionales - Si...Entonces

### ¿Qué son las Condicionales?
Las **condicionales** nos permiten que el programa tome **decisiones** basadas en condiciones específicas.

### Sintaxis Básica

```pseudocode
Si (condición) Entonces
    // Código que se ejecuta si la condición es verdadera
SiNo
    // Código que se ejecuta si la condición es falsa
FinSi
```

### Operadores de Comparación

| Operador | Significado | Ejemplo |
|----------|-------------|---------|
| `=` | Igual a | `edad = 18` |
| `<>` | Diferente de | `nombre <> ""` |
| `>` | Mayor que | `nota > 70` |
| `<` | Menor que | `precio < 100` |
| `>=` | Mayor o igual | `edad >= 18` |
| `<=` | Menor o igual | `calificacion <= 10` |

### Ejemplo: Verificar si es Mayor de Edad

```pseudocode
Algoritmo MayorDeEdad
    Definir edad Como Entero
    
    Escribir "Ingresa tu edad:"
    Leer edad
    
    Si edad >= 18 Entonces
        Escribir "Eres mayor de edad"
    SiNo
        Escribir "Eres menor de edad"
    FinSi
FinAlgoritmo
```

### 💡 Ejercicio Práctico 5:
Programa que evalúe una calificación:

```pseudocode
Algoritmo EvaluarCalificacion
    Definir calificacion Como Real
    
    Escribir "Ingresa tu calificación (0-10):"
    Leer calificacion
    
    Si calificacion >= 7 Entonces
        Escribir "¡Felicidades! Has aprobado"
    SiNo
        Escribir "Lo siento, has reprobado"
    FinSi
    
    Si calificacion >= 9 Entonces
        Escribir "¡Excelente calificación!"
    FinSi
FinAlgoritmo
```

---

## 📖 Lección 7: Ciclos - Para

### ¿Qué son los Ciclos?
Los **ciclos** nos permiten **repetir** un bloque de código varias veces de manera automática.

### Sintaxis del Ciclo Para

```pseudocode
Para variable <- valor_inicial Hasta valor_final Con Paso paso Hacer
    // Código que se repite
FinPara
```

### Ejemplo: Contar del 1 al 5

```pseudocode
Algoritmo ContarUnoAlCinco
    Definir i Como Entero
    
    Escribir "Contando del 1 al 5:"
    
    Para i <- 1 Hasta 5 Con Paso 1 Hacer
        Escribir "Número: ", i
    FinPara
    
    Escribir "¡Terminé de contar!"
FinAlgoritmo
```

### Ejemplo: Tabla de Multiplicar

```pseudocode
Algoritmo TablaMultiplicar
    Definir numero, i, resultado Como Entero
    
    Escribir "¿De qué número quieres la tabla de multiplicar?"
    Leer numero
    
    Escribir "Tabla del ", numero, ":"
    
    Para i <- 1 Hasta 10 Con Paso 1 Hacer
        resultado <- numero * i
        Escribir numero, " x ", i, " = ", resultado
    FinPara
FinAlgoritmo
```

### 💡 Ejercicio Práctico 6:
Programa que sume los números del 1 al 10:

```pseudocode
Algoritmo SumarUnoAlDiez
    Definir i, suma Como Entero
    
    suma <- 0
    
    Para i <- 1 Hasta 10 Con Paso 1 Hacer
        suma <- suma + i
        Escribir "Sumando ", i, " - Total: ", suma
    FinPara
    
    Escribir ""
    Escribir "La suma total es: ", suma
FinAlgoritmo
```

---

## 🖥️ Ejercicio Final del Módulo

### 🎯 **Calculadora con Comparador**

Crear un programa que:
1. Pida dos números al usuario
2. Muestre todas las operaciones básicas (suma, resta, multiplicación, división, potencia al cuadrado)
3. Compare si la suma es mayor, menor o igual a 10
4. Muestre una tabla de multiplicar del primer número (del 1 al 5)

```pseudocode
Algoritmo CalculadoraConComparador
    // Declarar variables
    Definir num1, num2 Como Real
    Definir suma, resta, multiplicacion, division, potencia1, potencia2 Como Real
    Definir i, resultado Como Entero
    
    // Solicitar datos
    Escribir "🔢 CALCULADORA CON COMPARADOR 🔢"
    Escribir "=================================="
    Escribir ""
    Escribir "Ingresa el primer número:"
    Leer num1
    
    Escribir "Ingresa el segundo número:"
    Leer num2
    
    // Realizar operaciones básicas
    suma <- num1 + num2
    resta <- num1 - num2
    multiplicacion <- num1 * num2
    division <- num1 / num2
    potencia1 <- num1 ^ 2
    potencia2 <- num2 ^ 2
    
    // Mostrar resultados
    Escribir ""
    Escribir "📊 OPERACIONES BÁSICAS:"
    Escribir "======================="
    Escribir num1, " + ", num2, " = ", suma
    Escribir num1, " - ", num2, " = ", resta
    Escribir num1, " × ", num2, " = ", multiplicacion
    
    Si num2 <> 0 Entonces
        Escribir num1, " ÷ ", num2, " = ", division
    SiNo
        Escribir "No se puede dividir entre cero"
    FinSi
    
    Escribir num1, "² = ", potencia1
    Escribir num2, "² = ", potencia2
    
    // Comparar la suma con 10
    Escribir ""
    Escribir "🔍 COMPARACIÓN CON 10:"
    Escribir "====================="
    
    Si suma > 10 Entonces
        Escribir "La suma (", suma, ") es MAYOR que 10"
    SiNo
        Si suma < 10 Entonces
            Escribir "La suma (", suma, ") es MENOR que 10"
        SiNo
            Escribir "La suma (", suma, ") es IGUAL a 10"
        FinSi
    FinSi
    
    // Mostrar tabla de multiplicar del primer número
    Escribir ""
    Escribir "📈 TABLA DEL ", num1, " (del 1 al 5):"
    Escribir "=========================="
    
    Para i <- 1 Hasta 5 Con Paso 1 Hacer
        resultado <- num1 * i
        Escribir num1, " × ", i, " = ", resultado
    FinPara
    
    Escribir ""
    Escribir "¡Programa completado exitosamente! 🎉"
FinAlgoritmo
```

### 🎮 Ejemplo de Ejecución:

```
🔢 CALCULADORA CON COMPARADOR 🔢
==================================

Ingresa el primer número:
7
Ingresa el segundo número:
4

📊 OPERACIONES BÁSICAS:
=======================
7 + 4 = 11
7 - 4 = 3
7 × 4 = 28
7 ÷ 4 = 1.75
7² = 49
4² = 16

🔍 COMPARACIÓN CON 10:
=====================
La suma (11) es MAYOR que 10

📈 TABLA DEL 7 (del 1 al 5):
==========================
7 × 1 = 7
7 × 2 = 14
7 × 3 = 21
7 × 4 = 28
7 × 5 = 35

¡Programa completado exitosamente! 🎉
```

---

## 📚 Resumen del Módulo

### ✅ Lo que aprendiste:
- **Estructura básica** de un algoritmo en PSeInt
- **Variables** y tipos de datos (entero, real, cadena)
- **Entrada y salida** de datos (`Leer` y `Escribir`)
- **Operaciones matemáticas** básicas
- **Condicionales** (`Si...Entonces...SiNo`)
- **Ciclos** (`Para`)

### 🎯 Habilidades desarrolladas:
- Pensamiento algorítmico
- Resolución de problemas paso a paso
- Manejo de datos y variables
- Lógica condicional
- Estructuras de repetición

### 🚀 Próximo paso:
En el **Módulo 2** aprenderemos a configurar el entorno de desarrollo y escribir nuestro primer programa en **lenguaje C**.

---

## 📝 Ejercicios Adicionales para Practicar

### Ejercicio Extra 1: Calculadora de IMC
```pseudocode
Algoritmo CalculadoraIMC
    Definir peso, estatura, imc Como Real
    
    Escribir "Calculadora de Índice de Masa Corporal"
    Escribir "Ingresa tu peso en kg:"
    Leer peso
    
    Escribir "Ingresa tu estatura en metros:"
    Leer estatura
    
    imc <- peso / (estatura ^ 2)
    
    Escribir "Tu IMC es: ", imc
    
    Si imc < 18.5 Entonces
        Escribir "Peso bajo"
    SiNo
        Si imc <= 24.9 Entonces
            Escribir "Peso normal"
        SiNo
            Si imc <= 29.9 Entonces
                Escribir "Sobrepeso"
            SiNo
                Escribir "Obesidad"
            FinSi
        FinSi
    FinSi
FinAlgoritmo
```

### Ejercicio Extra 2: Contador de Números Pares
```pseudocode
Algoritmo ContadorPares
    Definir i, contador Como Entero
    
    contador <- 0
    
    Escribir "Números pares del 1 al 20:"
    
    Para i <- 1 Hasta 20 Con Paso 1 Hacer
        Si i % 2 = 0 Entonces
            Escribir i
            contador <- contador + 1
        FinSi
    FinPara
    
    Escribir "Total de números pares: ", contador
FinAlgoritmo
```

---

<div align="center">
  <img src="https://img.shields.io/badge/¡Felicidades!-Has%20completado%20el%20Módulo%201-37F740?style=for-the-badge&logo=trophy&logoColor=white" alt="Completado" />
  <br><br>
  
  **Siguiente:** [![Módulo 2](https://img.shields.io/badge/Módulo%202-Entorno%20de%20trabajo%20C-blue?style=for-the-badge&logo=next&logoColor=white)](../Módulo%202)
</div>