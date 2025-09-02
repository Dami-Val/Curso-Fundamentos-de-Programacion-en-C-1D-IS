# ═══════════════════════════════════════════════════════════════════════════════
# │                          MÓDULO 2: ENTORNO DE TRABAJO                      │
# │                        Linux/CMD y Programación en C                       │
# ═══════════════════════════════════════════════════════════════════════════════

<div align="center">

```
██╗      ██╗███╗   ██╗██╗   ██╗██╗  ██╗    ██╗     ██████╗
██║      ██║████╗  ██║██║   ██║╚██╗██╔╝   ██╔╝    ██╔════╝
██║      ██║██╔██╗ ██║██║   ██║ ╚███╔╝   ██╔╝     ██║     
██║      ██║██║╚██╗██║██║   ██║ ██╔██╗  ██╔╝      ██║     
███████╗ ██║██║ ╚████║╚██████╔╝██╔╝ ██╗██╔╝       ╚██████╗
╚══════╝ ╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝╚═╝         ╚═════╝
```

**SEMANA 2 - ENTORNO DE TRABAJO**

![Nivel](https://img.shields.io/badge/Nivel-Principiante--Intermedio-orange?style=for-the-badge)
![Duración](https://img.shields.io/badge/Duración-1%20Semana-blue?style=for-the-badge)
![Ejercicios](https://img.shields.io/badge/Ejercicios-8+-green?style=for-the-badge)

</div>

---

## ▓▓▓ OBJETIVOS DEL MÓDULO ▓▓▓

> **Meta Principal:** Configurar el entorno de desarrollo y realizar la transición de PSeInt a programación real en C

### ◆ OBJETIVOS ESPECÍFICOS
- **Dominar navegación** en línea de comandos (CMD/Linux)
- **Instalar y configurar** el compilador GCC
- **Crear, compilar y ejecutar** programas en C
- **Escribir el primer programa** en lenguaje C
- **Manejar variables** básicas en C (int, float, char)
- **Implementar entrada/salida** con printf/scanf
- **Realizar operaciones** matemáticas en C

---

## ▓▓▓ ESTRUCTURA DEL MÓDULO ▓▓▓

<table>
<tr>
<td width="50%">

### ► PARTE I: ENTORNO DE TRABAJO
```
├── Lección 1: Navegación CMD/Linux
├── Lección 2: Instalación GCC
├── Lección 3: Primer programa en C
└── Lección 4: Compilación básica
```

</td>
<td width="50%">

### ► PARTE II: PROGRAMACIÓN EN C
```
├── Lección 5: Variables en C
├── Lección 6: Entrada/Salida
├── Lección 7: Operaciones matemáticas
└── Proyecto Final: Calculadora en C
```

</td>
</tr>
</table>

---

## ████████████████████████████████████████████████████████████████████████████████

# LECCIÓN 1: NAVEGACIÓN EN LÍNEA DE COMANDOS

## ████████████████████████████████████████████████████████████████████████████████

### ◆ INTRODUCCIÓN A LA TERMINAL

La **línea de comandos** es una interfaz de texto que nos permite interactuar directamente con el sistema operativo. Es fundamental para compilar y ejecutar programas en C.

<div align="center">

| **WINDOWS (CMD)**               | **LINUX/UNIX**                |
|--------------------------------|--------------------------------|
| Command Prompt                 | Terminal/Bash                  |
| PowerShell                     | Shell                          |

</div>

### ◆ COMANDOS FUNDAMENTALES

#### ▪ NAVEGACIÓN DE DIRECTORIOS

<table>
<tr>
<th width="20%">Acción</th>
<th width="25%">Windows (CMD)</th>
<th width="25%">Linux</th>
<th width="30%">Descripción</th>
</tr>
<tr>
<td><strong>Ver directorio actual</strong></td>
<td><code>cd</code></td>
<td><code>pwd</code></td>
<td>Muestra la ruta actual</td>
</tr>
<tr>
<td><strong>Listar contenido</strong></td>
<td><code>dir</code></td>
<td><code>ls</code></td>
<td>Lista archivos y carpetas</td>
</tr>
<tr>
<td><strong>Cambiar directorio</strong></td>
<td><code>cd carpeta</code></td>
<td><code>cd carpeta</code></td>
<td>Entra a una carpeta</td>
</tr>
<tr>
<td><strong>Directorio padre</strong></td>
<td><code>cd ..</code></td>
<td><code>cd ..</code></td>
<td>Regresa un nivel</td>
</tr>
<tr>
<td><strong>Crear directorio</strong></td>
<td><code>mkdir nombre</code></td>
<td><code>mkdir nombre</code></td>
<td>Crea nueva carpeta</td>
</tr>
</table>

#### ▪ PRÁCTICA GUIADA: NAVEGACIÓN BÁSICA

**En Windows (CMD):**
```cmd
C:\> cd Desktop
C:\Users\Usuario\Desktop> mkdir MisProgramasC
C:\Users\Usuario\Desktop> cd MisProgramasC
C:\Users\Usuario\Desktop\MisProgramasC> dir
```

**En Linux:**
```bash
$ cd ~/Desktop
$ mkdir MisProgramasC
$ cd MisProgramasC
$ ls -la
```

### ◆ EJERCICIO PRÁCTICO 1: NAVEGACIÓN

**Objetivo:** Familiarizarse con la navegación en terminal

**Instrucciones:**
1. Abrir la terminal/CMD
2. Navegar al escritorio
3. Crear una carpeta llamada "CursoC"
4. Entrar a la carpeta
5. Crear dos subcarpetas: "ejercicios" y "proyectos"
6. Listar el contenido para verificar

---

## ████████████████████████████████████████████████████████████████████████████████

# LECCIÓN 2: INSTALACIÓN DEL COMPILADOR GCC

## ████████████████████████████████████████████████████████████████████████████████

### ◆ ¿QUÉ ES GCC?

**GCC** (GNU Compiler Collection) es un conjunto de compiladores de código abierto que incluye soporte para C, C++, y otros lenguajes.

```
┌─────────────────────────────────────────────────────┐
│  CÓDIGO FUENTE (.c)  →  COMPILADOR (gcc)  →  EJECUTABLE  │
│                                                     │
│  programa.c          →      gcc       →  programa.exe    │
└─────────────────────────────────────────────────────┘
```

### ◆ INSTALACIÓN POR SISTEMA OPERATIVO

#### ▪ WINDOWS

**Opción 1: MinGW-w64**
1. Descargar desde: `https://www.mingw-w64.org/downloads/`
2. Instalar siguiendo el asistente
3. Agregar al PATH del sistema

**Opción 2: TDM-GCC (Recomendado para principiantes)**
1. Descargar desde: `https://jmeubank.github.io/tdm-gcc/`
2. Ejecutar instalador
3. Verificar instalación

**Verificación en Windows:**
```cmd
gcc --version
```

#### ▪ LINUX (Ubuntu/Debian)

```bash
# Actualizar repositorios
sudo apt update

# Instalar GCC
sudo apt install gcc

# Verificar instalación
gcc --version
```

#### ▪ LINUX (CentOS/RHEL)

```bash
# Instalar GCC
sudo yum install gcc

# O en versiones nuevas
sudo dnf install gcc

# Verificar
gcc --version
```

### ◆ EJERCICIO PRÁCTICO 2: VERIFICACIÓN DE GCC

**Crear archivo de prueba:**

**En Windows:**
```cmd
echo #include ^<stdio.h^> > test.c
echo int main() { printf("GCC funciona!"); return 0; } >> test.c
gcc test.c -o test.exe
test.exe
```

**En Linux:**
```bash
echo '#include <stdio.h>' > test.c
echo 'int main() { printf("GCC funciona!"); return 0; }' >> test.c
gcc test.c -o test
./test
```

---

## ████████████████████████████████████████████████████████████████████████████████

# LECCIÓN 3: PRIMER PROGRAMA EN C

## ████████████████████████████████████████████████████████████████████████████████

### ◆ ESTRUCTURA BÁSICA DE UN PROGRAMA EN C

```c
/*
┌─────────────────────────────────────────────────────┐
│              ANATOMÍA DE UN PROGRAMA EN C          │
└─────────────────────────────────────────────────────┘
*/

#include <stdio.h>      // ← Biblioteca para entrada/salida

int main() {            // ← Función principal
    printf("Hola mundo");  // ← Mostrar texto
    return 0;           // ← Terminar programa
}
```

### ◆ COMPARACIÓN: PSEINT vs C

<table>
<tr>
<th width="30%">Concepto</th>
<th width="35%">PSeInt</th>
<th width="35%">C</th>
</tr>
<tr>
<td><strong>Inicio del programa</strong></td>
<td><code>Algoritmo NombreAlgoritmo</code></td>
<td><code>int main() {</code></td>
</tr>
<tr>
<td><strong>Mostrar texto</strong></td>
<td><code>Escribir "texto"</code></td>
<td><code>printf("texto");</code></td>
</tr>
<tr>
<td><strong>Fin del programa</strong></td>
<td><code>FinAlgoritmo</code></td>
<td><code>return 0; }</code></td>
</tr>
</table>

### ◆ NUESTRO PRIMER PROGRAMA: "HOLA MUNDO"

**Archivo:** `hola_mundo.c`

```c
/*
════════════════════════════════════════════════════════
  PROGRAMA: Hola Mundo en C
  AUTOR: [Tu Nombre]
  DESCRIPCIÓN: Primer programa en lenguaje C
════════════════════════════════════════════════════════
*/

#include <stdio.h>

int main() {
    printf("¡Hola Mundo desde C!\n");
    printf("Mi primer programa compilado\n");
    printf("Bienvenido al mundo de la programación en C\n");
    
    return 0;
}
```

### ◆ PROCESO DE COMPILACIÓN Y EJECUCIÓN

#### ▪ PASOS DETALLADOS

```
PASO 1: CREAR ARCHIVO
┌─────────────────────┐
│    hola_mundo.c     │  ← Código fuente
└─────────────────────┘

         ↓ (compilar)

PASO 2: COMPILAR
┌─────────────────────┐
│ gcc hola_mundo.c -o │  ← Comando de compilación
│    hola_mundo       │
└─────────────────────┘

         ↓ (resultado)

PASO 3: EJECUTAR
┌─────────────────────┐
│   ./hola_mundo      │  ← Programa ejecutable
└─────────────────────┘
```

#### ▪ COMANDOS ESPECÍFICOS

**En Windows:**
```cmd
gcc hola_mundo.c -o hola_mundo.exe
hola_mundo.exe
```

**En Linux:**
```bash
gcc hola_mundo.c -o hola_mundo
./hola_mundo
```

### ◆ EJERCICIO PRÁCTICO 3: PRIMER PROGRAMA

**Crear tu versión personalizada:**

```c
#include <stdio.h>

int main() {
    printf("════════════════════════════════\n");
    printf("    MI PRIMER PROGRAMA EN C     \n");
    printf("════════════════════════════════\n");
    printf("Nombre: [Tu nombre completo]\n");
    printf("Carrera: [Tu carrera]\n");
    printf("Objetivo: Aprender programación en C\n");
    printf("════════════════════════════════\n");
    
    return 0;
}
```

---

## ████████████████████████████████████████████████████████████████████████████████

# LECCIÓN 4: COMPILACIÓN AVANZADA

## ████████████████████████████████████████████████████████████████████████████████

### ◆ OPCIONES DEL COMPILADOR GCC

<table>
<tr>
<th width="20%">Opción</th>
<th width="40%">Descripción</th>
<th width="40%">Ejemplo</th>
</tr>
<tr>
<td><code>-o</code></td>
<td>Especifica el nombre del archivo de salida</td>
<td><code>gcc programa.c -o programa</code></td>
</tr>
<tr>
<td><code>-Wall</code></td>
<td>Muestra todas las advertencias</td>
<td><code>gcc -Wall programa.c -o programa</code></td>
</tr>
<tr>
<td><code>-g</code></td>
<td>Incluye información de depuración</td>
<td><code>gcc -g programa.c -o programa</code></td>
</tr>
<tr>
<td><code>-std=c99</code></td>
<td>Usa el estándar C99</td>
<td><code>gcc -std=c99 programa.c -o programa</code></td>
</tr>
</table>

### ◆ MANEJO DE ERRORES COMUNES

#### ▪ ERROR: ARCHIVO NO ENCONTRADO
```
gcc: error: programa.c: No such file or directory
```
**Solución:** Verificar que el archivo existe y está en el directorio actual.

#### ▪ ERROR: SINTAXIS
```
programa.c:5:1: error: expected ';' before '}' token
```
**Solución:** Revisar la línea indicada, probablemente falta un punto y coma.

#### ▪ ERROR: FUNCIÓN NO DECLARADA
```
warning: implicit declaration of function 'printf'
```
**Solución:** Agregar `#include <stdio.h>` al inicio del archivo.

### ◆ EJERCICIO PRÁCTICO 4: DEPURACIÓN

**Programa con errores intencionados:**

```c
#include <stdio.h>

int main() {
    printf("Programa con errores\n")  // ← Falta punto y coma
    printf("Encontrar y corregir\n");
    return 0
}  // ← Falta punto y coma
```

**Instrucciones:**
1. Copiar el código anterior en un archivo `debug.c`
2. Intentar compilar y observar los errores
3. Corregir los errores uno por uno
4. Compilar exitosamente

---

## ████████████████████████████████████████████████████████████████████████████████

# LECCIÓN 5: VARIABLES EN C

## ████████████████████████████████████████████████████████████████████████████████

### ◆ TIPOS DE DATOS BÁSICOS

<table>
<tr>
<th width="15%">Tipo</th>
<th width="20%">Descripción</th>
<th width="20%">Tamaño</th>
<th width="25%">Rango</th>
<th width="20%">Ejemplo</th>
</tr>
<tr>
<td><code>int</code></td>
<td>Número entero</td>
<td>4 bytes</td>
<td>-2,147,483,648 a 2,147,483,647</td>
<td><code>int edad = 20;</code></td>
</tr>
<tr>
<td><code>float</code></td>
<td>Número decimal</td>
<td>4 bytes</td>
<td>6-7 dígitos decimales</td>
<td><code>float altura = 1.75;</code></td>
</tr>
<tr>
<td><code>char</code></td>
<td>Carácter</td>
<td>1 byte</td>
<td>0 a 255 (ASCII)</td>
<td><code>char inicial = 'A';</code></td>
</tr>
<tr>
<td><code>double</code></td>
<td>Decimal doble precisión</td>
<td>8 bytes</td>
<td>15-17 dígitos decimales</td>
<td><code>double pi = 3.14159;</code></td>
</tr>
</table>

### ◆ DECLARACIÓN Y INICIALIZACIÓN

#### ▪ SINTAXIS BÁSICA

```c
/*
┌─────────────────────────────────────────────────────┐
│               DECLARACIÓN DE VARIABLES              │
└─────────────────────────────────────────────────────┘
*/

// Declaración simple
int numero;

// Declaración con inicialización
int edad = 25;

// Múltiples variables del mismo tipo
int a, b, c;

// Múltiples variables con inicialización
int x = 10, y = 20, z = 30;
```

#### ▪ COMPARACIÓN CON PSEINT

<table>
<tr>
<th width="30%">Concepto</th>
<th width="35%">PSeInt</th>
<th width="35%">C</th>
</tr>
<tr>
<td><strong>Declarar entero</strong></td>
<td><code>Definir numero Como Entero</code></td>
<td><code>int numero;</code></td>
</tr>
<tr>
<td><strong>Declarar decimal</strong></td>
<td><code>Definir precio Como Real</code></td>
<td><code>float precio;</code></td>
</tr>
<tr>
<td><strong>Asignar valor</strong></td>
<td><code>numero <- 10</code></td>
<td><code>numero = 10;</code></td>
</tr>
</table>

### ◆ EJERCICIO PRÁCTICO 5: VARIABLES BÁSICAS

```c
/*
════════════════════════════════════════════════════════
  PROGRAMA: Manejo de Variables
  OBJETIVO: Practicar declaración y uso de variables
════════════════════════════════════════════════════════
*/

#include <stdio.h>

int main() {
    // Declarar variables de diferentes tipos
    int edad;
    float altura;
    char inicial;
    
    // Asignar valores
    edad = 20;
    altura = 1.75;
    inicial = 'J';
    
    // Mostrar valores
    printf("═══════════════════════════════\n");
    printf("      INFORMACIÓN PERSONAL     \n");
    printf("═══════════════════════════════\n");
    printf("Edad: %d años\n", edad);
    printf("Altura: %.2f metros\n", altura);
    printf("Inicial del nombre: %c\n", inicial);
    printf("═══════════════════════════════\n");
    
    return 0;
}
```

### ◆ ESPECIFICADORES DE FORMATO

<table>
<tr>
<th width="20%">Especificador</th>
<th width="20%">Tipo</th>
<th width="30%">Descripción</th>
<th width="30%">Ejemplo</th>
</tr>
<tr>
<td><code>%d</code></td>
<td>int</td>
<td>Número entero</td>
<td><code>printf("%d", 25);</code></td>
</tr>
<tr>
<td><code>%f</code></td>
<td>float</td>
<td>Número decimal</td>
<td><code>printf("%.2f", 3.14);</code></td>
</tr>
<tr>
<td><code>%c</code></td>
<td>char</td>
<td>Carácter individual</td>
<td><code>printf("%c", 'A');</code></td>
</tr>
<tr>
<td><code>%s</code></td>
<td>string</td>
<td>Cadena de caracteres</td>
<td><code>printf("%s", "Hola");</code></td>
</tr>
</table>

---

## ████████████████████████████████████████████████████████████████████████████████

# LECCIÓN 6: ENTRADA Y SALIDA DE DATOS

## ████████████████████████████████████████████████████████████████████████████████

### ◆ FUNCIÓN printf() - SALIDA DE DATOS

#### ▪ SINTAXIS Y USO

```c
printf("formato", variables);
```

#### ▪ EJEMPLOS PRÁCTICOS

```c
#include <stdio.h>

int main() {
    int numero = 42;
    float decimal = 3.14159;
    char letra = 'C';
    
    printf("Número entero: %d\n", numero);
    printf("Número decimal: %.2f\n", decimal);
    printf("Carácter: %c\n", letra);
    printf("Múltiples valores: %d, %.1f, %c\n", numero, decimal, letra);
    
    return 0;
}
```

### ◆ FUNCIÓN scanf() - ENTRADA DE DATOS

#### ▪ SINTAXIS Y USO

```c
scanf("formato", &variable);
```

> **IMPORTANTE:** El símbolo `&` es crucial para indicar la dirección de la variable.

#### ▪ EJEMPLOS DE ENTRADA

```c
#include <stdio.h>

int main() {
    int edad;
    float altura;
    char inicial;
    
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    
    printf("Ingresa tu altura: ");
    scanf("%f", &altura);
    
    printf("Ingresa la inicial de tu nombre: ");
    scanf(" %c", &inicial);  // Nota el espacio antes de %c
    
    printf("\nDatos ingresados:\n");
    printf("Edad: %d años\n", edad);
    printf("Altura: %.2f metros\n", altura);
    printf("Inicial: %c\n", inicial);
    
    return 0;
}
```

### ◆ COMPARACIÓN: PSEINT vs C

<table>
<tr>
<th width="25%">Operación</th>
<th width="35%">PSeInt</th>
<th width="40%">C</th>
</tr>
<tr>
<td><strong>Mostrar texto</strong></td>
<td><code>Escribir "Hola"</code></td>
<td><code>printf("Hola\n");</code></td>
</tr>
<tr>
<td><strong>Mostrar variable</strong></td>
<td><code>Escribir variable</code></td>
<td><code>printf("%d", variable);</code></td>
</tr>
<tr>
<td><strong>Leer entero</strong></td>
<td><code>Leer numero</code></td>
<td><code>scanf("%d", &numero);</code></td>
</tr>
<tr>
<td><strong>Leer decimal</strong></td>
<td><code>Leer precio</code></td>
<td><code>scanf("%f", &precio);</code></td>
</tr>
</table>

### ◆ EJERCICIO PRÁCTICO 6: ENTRADA Y SALIDA

```c
/*
════════════════════════════════════════════════════════
  PROGRAMA: Registro de Estudiante
  OBJETIVO: Practicar entrada y salida de datos
════════════════════════════════════════════════════════
*/

#include <stdio.h>

int main() {
    // Declarar variables
    int numeroControl;
    float promedio;
    char grado;
    
    // Solicitar datos
    printf("══════════════════════════════════════════\n");
    printf("         REGISTRO DE ESTUDIANTE           \n");
    printf("══════════════════════════════════════════\n");
    
    printf("Ingresa tu número de control: ");
    scanf("%d", &numeroControl);
    
    printf("Ingresa tu promedio: ");
    scanf("%f", &promedio);
    
    printf("Ingresa tu grado (A, B, C): ");
    scanf(" %c", &grado);
    
    // Mostrar resumen
    printf("\n══════════════════════════════════════════\n");
    printf("            RESUMEN DE DATOS              \n");
    printf("══════════════════════════════════════════\n");
    printf("Número de Control: %d\n", numeroControl);
    printf("Promedio: %.2f\n", promedio);
    printf("Grado: %c\n", grado);
    printf("══════════════════════════════════════════\n");
    
    return 0;
}
```

---

## ████████████████████████████████████████████████████████████████████████████████

# LECCIÓN 7: OPERACIONES MATEMÁTICAS EN C

## ████████████████████████████████████████████████████████████████████████████████

### ◆ OPERADORES ARITMÉTICOS BÁSICOS

<table>
<tr>
<th width="20%">Operador</th>
<th width="30%">Descripción</th>
<th width="25%">Ejemplo</th>
<th width="25%">Resultado</th>
</tr>
<tr>
<td><code>+</code></td>
<td>Suma</td>
<td><code>5 + 3</code></td>
<td><code>8</code></td>
</tr>
<tr>
<td><code>-</code></td>
<td>Resta</td>
<td><code>10 - 4</code></td>
<td><code>6</code></td>
</tr>
<tr>
<td><code>*</code></td>
<td>Multiplicación</td>
<td><code>6 * 7</code></td>
<td><code>42</code></td>
</tr>
<tr>
<td><code>/</code></td>
<td>División</td>
<td><code>15 / 3</code></td>
<td><code>5</code></td>
</tr>
<tr>
<td><code>%</code></td>
<td>Módulo (residuo)</td>
<td><code>17 % 5</code></td>
<td><code>2</code></td>
</tr>
</table>

### ◆ FUNCIÓN pow() - POTENCIAS

Para usar potencias, necesitamos incluir la biblioteca `<math.h>` y compilar con `-lm`:

```c
#include <stdio.h>
#include <math.h>

int main() {
    double base = 2.0;
    double exponente = 3.0;
    double resultado = pow(base, exponente);
    
    printf("%.0f elevado a %.0f = %.0f\n", base, exponente, resultado);
    return 0;
}
```

**Compilación con math.h:**
```bash
gcc programa.c -o programa -lm
```

### ◆ PRECEDENCIA DE OPERADORES

```c
/*
ORDEN DE PRECEDENCIA (de mayor a menor):
1. () - Paréntesis
2. * / % - Multiplicación, división, módulo
3. + - - Suma y resta
*/

int resultado1 = 2 + 3 * 4;      // resultado1 = 14 (no 20)
int resultado2 = (2 + 3) * 4;    // resultado2 = 20
```

### ◆ EJERCICIO PRÁCTICO 7: CALCULADORA BÁSICA

```c
/*
════════════════════════════════════════════════════════
  PROGRAMA: Calculadora Básica en C
  OBJETIVO: Implementar operaciones matemáticas
════════════════════════════════════════════════════════
*/

#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    float suma, resta, multiplicacion, division;
    double potencia1, potencia2;
    
    // Solicitar números
    printf("═══════════════════════════════════════════\n");
    printf("           CALCULADORA BÁSICA              \n");
    printf("═══════════════════════════════════════════\n");
    
    printf("Ingresa el primer número: ");
    scanf("%f", &num1);
    
    printf("Ingresa el segundo número: ");
    scanf("%f", &num2);
    
    // Realizar operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    potencia1 = pow(num1, 2);
    potencia2 = pow(num2, 2);
    
    // Mostrar resultados
    printf("\n═══════════════════════════════════════════\n");
    printf("               RESULTADOS                  \n");
    printf("═══════════════════════════════════════════\n");
    
    printf("%.2f + %.2f = %.2f\n", num1, num2, suma);
    printf("%.2f - %.2f = %.2f\n", num1, num2, resta);
    printf("%.2f * %.2f = %.2f\n", num1, num2, multiplicacion);
    
    if (num2 != 0) {
        printf("%.2f / %.2f = %.2f\n", num1, num2, division);
    } else {
        printf("No se puede dividir entre cero\n");
    }
    
    printf("(%.2f)² = %.2f\n", num1, potencia1);
    printf("(%.2f)² = %.2f\n", num2, potencia2);
    
    printf("═══════════════════════════════════════════\n");
    
    return 0;
}
```

---

## ████████████████████████████████████████████████████████████████████████████████

# PROYECTO FINAL: CALCULADORA COMPLETA

## ████████████████████████████████████████████████████████████████████████████████

### ◆ ESPECIFICACIONES DEL PROYECTO

**Objetivo:** Crear una calculadora completa que demuestre todos los conceptos aprendidos en el módulo.

**Funcionalidades requeridas:**
- Solicitar dos números al usuario
- Realizar todas las operaciones básicas
- Mostrar resultados formateados
- Manejar casos especiales (división por cero)
- Usar buenas prácticas de programación

### ◆ CÓDIGO COMPLETO DEL PROYECTO

```c
/*
════════════════════════════════════════════════════════════════════════════════════
  PROYECTO FINAL - MÓDULO 2
  
  CALCULADORA COMPLETA EN C
  
  Autor: [Tu Nombre]
  Fecha: [Fecha actual]
  Descripción: Calculadora que implementa todas las operaciones básicas
               demostrando los conceptos aprendidos en el Módulo 2
════════════════════════════════════════════════════════════════════════════════════
*/

#include <stdio.h>
#include <math.h>

int main() {
    // Declaración de variables
    float numero1, numero2;
    float suma, resta, multiplicacion, division;
    double potencia1, potencia2;
    
    // Encabezado del programa
    printf("████████████████████████████████████████████████████████████████\n");
    printf("██                                                            ██\n");
    printf("██              CALCULADORA CIENTÍFICA EN C                   ██\n");
    printf("██                    MÓDULO 2 - PROYECTO FINAL               ██\n");
    printf("██                                                            ██\n");
    printf("████████████████████████████████████████████████████████████████\n");
    printf("\n");
    
    // Solicitar datos al usuario
    printf("┌──────────────────────────────────────────────────────────────┐\n");
    printf("│                        ENTRADA DE DATOS                     │\n");
    printf("└──────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("► Ingresa el primer número: ");
    scanf("%f", &numero1);
    
    printf("► Ingresa el segundo número: ");
    scanf("%f", &numero2);
    
    // Realizar cálculos
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    potencia1 = pow(numero1, 2);
    potencia2 = pow(numero2, 2);
    
    // Mostrar resultados
    printf("\n");
    printf("┌──────────────────────────────────────────────────────────────┐\n");
    printf("│                     OPERACIONES BÁSICAS                     │\n");
    printf("└──────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ SUMA:           %.2f + %.2f = %.2f\n", numero1, numero2, suma);
    printf("▓ RESTA:          %.2f - %.2f = %.2f\n", numero1, numero2, resta);
    printf("▓ MULTIPLICACIÓN: %.2f × %.2f = %.2f\n", numero1, numero2, multiplicacion);
    
    // División con validación
    if (numero2 != 0.0) {
        division = numero1 / numero2;
        printf("▓ DIVISIÓN:       %.2f ÷ %.2f = %.2f\n", numero1, numero2, division);
    } else {
        printf("▓ DIVISIÓN:       ERROR - No se puede dividir entre cero\n");
    }
    
    printf("\n");
    printf("┌──────────────────────────────────────────────────────────────┐\n");
    printf("│                        POTENCIAS                            │\n");
    printf("└──────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    printf("▓ POTENCIA:       (%.2f)² = %.2f\n", numero1, potencia1);
    printf("▓ POTENCIA:       (%.2f)² = %.2f\n", numero2, potencia2);
    
    // Análisis adicional
    printf("\n");
    printf("┌──────────────────────────────────────────────────────────────┐\n");
    printf("│                    ANÁLISIS ADICIONAL                       │\n");
    printf("└──────────────────────────────────────────────────────────────┘\n");
    printf("\n");
    
    // Determinar cuál número es mayor
    if (numero1 > numero2) {
        printf("▓ El primer número (%.2f) es MAYOR que el segundo (%.2f)\n", 
               numero1, numero2);
    } else if (numero2 > numero1) {
        printf("▓ El segundo número (%.2f) es MAYOR que el primero (%.2f)\n", 
               numero2, numero1);
    } else {
        printf("▓ Ambos números son IGUALES (%.2f)\n", numero1);
    }
    
    // Análisis de la suma
    printf("▓ La suma de los números es: %.2f\n", suma);
    if (suma > 100) {
        printf("▓ La suma es MAYOR a 100\n");
    } else if (suma < 0) {
        printf("▓ La suma es NEGATIVA\n");
    } else {
        printf("▓ La suma está entre 0 y 100\n");
    }
    
    // Pie de programa
    printf("\n");
    printf("████████████████████████████████████████████████████████████████\n");
    printf("██                                                            ██\n");
    printf("██                ¡CÁLCULOS COMPLETADOS!                     ██\n");
    printf("██          Módulo 2: Entorno de trabajo y C básico          ██\n");
    printf("██                                                            ██\n");
    printf("████████████████████████████████████████████████████████████████\n");
    
    return 0;
}
```

### ◆ INSTRUCCIONES DE COMPILACIÓN

**Para Windows:**
```cmd
gcc calculadora_final.c -o calculadora_final.exe -lm
calculadora_final.exe
```

**Para Linux:**
```bash
gcc calculadora_final.c -o calculadora_final -lm
./calculadora_final
```

### ◆ EJEMPLO DE EJECUCIÓN

```
████████████████████████████████████████████████████████████████
██                                                            ██
██              CALCULADORA CIENTÍFICA EN C                   ██
██                    MÓDULO 2 - PROYECTO FINAL               ██
██                                                            ██
████████████████████████████████████████████████████████████████

┌──────────────────────────────────────────────────────────────┐
│                        ENTRADA DE DATOS                     │
└──────────────────────────────────────────────────────────────┘

► Ingresa el primer número: 15.5
► Ingresa el segundo número: 4.2

┌──────────────────────────────────────────────────────────────┐
│                     OPERACIONES BÁSICAS                     │
└──────────────────────────────────────────────────────────────┘

▓ SUMA:           15.50 + 4.20 = 19.70
▓ RESTA:          15.50 - 4.20 = 11.30
▓ MULTIPLICACIÓN: 15.50 × 4.20 = 65.10
▓ DIVISIÓN:       15.50 ÷ 4.20 = 3.69

┌──────────────────────────────────────────────────────────────┐
│                        POTENCIAS                            │
└──────────────────────────────────────────────────────────────┘

▓ POTENCIA:       (15.50)² = 240.25
▓ POTENCIA:       (4.20)² = 17.64

┌──────────────────────────────────────────────────────────────┐
│                    ANÁLISIS ADICIONAL                       │
└──────────────────────────────────────────────────────────────┘

▓ El primer número (15.50) es MAYOR que el segundo (4.20)
▓ La suma de los números es: 19.70
▓ La suma está entre 0 y 100

████████████████████████████████████████████████████████████████
██                                                            ██
██                ¡CÁLCULOS COMPLETADOS!                     ██
██          Módulo 2: Entorno de trabajo y C básico          ██
██                                                            ██
████████████████████████████████████████████████████████████████
```

---

## ▓▓▓ RESUMEN DEL MÓDULO ▓▓▓

### ◆ CONCEPTOS DOMINADOS

<table>
<tr>
<td width="50%">

#### ► ENTORNO DE TRABAJO
- ✓ Navegación en CMD/Linux
- ✓ Instalación de GCC
- ✓ Compilación de programas
- ✓ Ejecución de binarios

</td>
<td width="50%">

#### ► PROGRAMACIÓN EN C
- ✓ Estructura básica de programas
- ✓ Variables y tipos de datos
- ✓ Entrada/salida con printf/scanf
- ✓ Operaciones matemáticas

</td>
</tr>
</table>

### ◆ HABILIDADES DESARROLLADAS

```
┌─────────────────────────────────────────────────────────────────┐
│                        COMPETENCIAS TÉCNICAS                   │
├─────────────────────────────────────────────────────────────────┤
│ ▪ Configuración de entorno de desarrollo                       │
│ ▪ Uso eficiente de la línea de comandos                        │
│ ▪ Compilación y depuración de programas C                      │
│ ▪ Manejo de variables y tipos de datos                         │
│ ▪ Implementación de entrada/salida de datos                    │
│ ▪ Resolución de problemas con operaciones matemáticas          │
└─────────────────────────────────────────────────────────────────┘
```

### ◆ TRANSICIÓN AL MÓDULO 3

**Preparación completada para:**
- Estructuras de control (if/else)
- Ciclos (for, while, do-while)
- Validación de datos
- Programas más complejos

---

## ▓▓▓ RECURSOS ADICIONALES ▓▓▓

### ◆ COMANDOS ESENCIALES PARA RECORDAR

```bash
# Compilación básica
gcc programa.c -o programa

# Compilación con todas las advertencias
gcc -Wall programa.c -o programa

# Compilación con biblioteca matemática
gcc programa.c -o programa -lm

# Compilación con depuración
gcc -g -Wall programa.c -o programa
```

### ◆ REFERENCIAS ÚTILES

- **Documentación GCC:** `https://gcc.gnu.org/onlinedocs/`
- **Tutorial línea de comandos:** `https://www.learnenough.com/command-line-tutorial`
- **Referencia C:** `https://en.cppreference.com/w/c`

---

<div align="center">

```
╔══════════════════════════════════════════════════════════════════════════════╗
║                                                                              ║
║                          ¡MÓDULO 2 COMPLETADO!                             ║
║                                                                              ║
║              Has dominado el entorno de trabajo y C básico                  ║
║                                                                              ║
║                        Próximo: MÓDULO 3                                    ║
║                    Estructuras de Control                                   ║
║                                                                              ║
╚══════════════════════════════════════════════════════════════════════════════╝
```

**Continúa tu aprendizaje:** [![Módulo 3](https://img.shields.io/badge/Módulo%203-Estructuras%20de%20Control-blue?style=for-the-badge)](../Módulo%203)

</div>