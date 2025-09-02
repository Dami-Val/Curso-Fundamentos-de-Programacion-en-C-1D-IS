# ═══════════════════════════════════════════════════════════════════════════════
# │                          MÓDULO 2: ENTORNO DE TRABAJO                      │
# │                      Terminal Linux y Programación en C                    │
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
- **Dominar navegación** en línea de comandos Linux
- **Instalar y configurar** GCC y editor Neovim
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
├── Lección 1: Navegación Terminal Linux
├── Lección 2: Instalación GCC y Neovim
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

### ◆ INTRODUCCIÓN A LA TERMINAL

La **línea de comandos** es una interfaz de texto que nos permite interactuar directamente con el sistema operativo. Es fundamental para compilar y ejecutar programas en C.

### ◆ COMANDOS FUNDAMENTALES

#### ▪ NAVEGACIÓN DE DIRECTORIOS

<table>
<tr>
<th width="30%">Acción</th>
<th width="35%">Linux/Unix</th>
<th width="35%">Descripción</th>
</tr>
<tr>
<td><strong>Ver directorio actual</strong></td>
<td><code>pwd</code></td>
<td>Muestra la ruta actual</td>
</tr>
<tr>
<td><strong>Listar contenido</strong></td>
<td><code>ls</code></td>
<td>Lista archivos y carpetas</td>
</tr>
<tr>
<td><strong>Listar con detalles</strong></td>
<td><code>ls -la</code></td>
<td>Lista con permisos y archivos ocultos</td>
</tr>
<tr>
<td><strong>Cambiar directorio</strong></td>
<td><code>cd carpeta</code></td>
<td>Entra a una carpeta</td>
</tr>
<tr>
<td><strong>Directorio padre</strong></td>
<td><code>cd ..</code></td>
<td>Regresa un nivel</td>
</tr>
<tr>
<td><strong>Ir al home</strong></td>
<td><code>cd ~</code></td>
<td>Va al directorio home del usuario</td>
</tr>
<tr>
<td><strong>Crear directorio</strong></td>
<td><code>mkdir nombre</code></td>
<td>Crea nueva carpeta</td>
</tr>
</table>

#### ▪ PRÁCTICA GUIADA: NAVEGACIÓN BÁSICA

```bash
$ cd ~/Desktop
$ mkdir MisProgramasC
$ cd MisProgramasC
$ ls -la
```

### ◆ EJERCICIO PRÁCTICO 1: NAVEGACIÓN

**Objetivo:** Familiarizarse con la navegación en terminal Linux

**Instrucciones paso a paso:**

1. **Abrir la terminal**
   ```bash
   # Presionar Ctrl+Alt+T o buscar "Terminal" en aplicaciones
   ```

2. **Navegar al escritorio**
   ```bash
   cd ~/Desktop
   pwd  # Verificar ubicación actual
   ```

3. **Crear carpeta principal del curso**
   ```bash
   mkdir CursoC
   ls -la  # Verificar que se creó la carpeta
   ```

4. **Entrar a la carpeta**
   ```bash
   cd CursoC
   pwd  # Confirmar que estamos dentro
   ```

5. **Crear subcarpetas organizativas**
   ```bash
   mkdir ejercicios proyectos
   ```

6. **Verificar estructura creada**
   ```bash
   ls -la
   tree  # Si está instalado, muestra estructura de árbol
   ```

**Resultado esperado:**
```
CursoC/
├── ejercicios/
└── proyectos/
```

---

## ████████████████████████████████████████████████████████████████████████████████

# LECCIÓN 2: INSTALACIÓN DEL COMPILADOR GCC Y EDITOR NEOVIM

## ████████████████████████████████████████████████████████████████████████████████

### ◆ ¿QUÉ ES GCC?

**GCC** (GNU Compiler Collection) es un conjunto de compiladores de código abierto que incluye soporte para C, C++, y otros lenguajes.

```
┌─────────────────────────────────────────────────────┐
│  CÓDIGO FUENTE (.c)  →  COMPILADOR (gcc)  →  EJECUTABLE  │
│                                                     │
│  programa.c          →      gcc       →  programa    │
└─────────────────────────────────────────────────────┘
```

### ◆ INSTALACIÓN DE GCC EN LINUX

#### ▪ UBUNTU/DEBIAN

```bash
# Actualizar repositorios
sudo apt update

# Instalar GCC y herramientas de desarrollo
sudo apt install gcc build-essential

# Verificar instalación
gcc --version
```

#### ▪ CENTOS/RHEL/FEDORA

```bash
# CentOS/RHEL
sudo yum install gcc

# Fedora (versiones nuevas)
sudo dnf install gcc

# Verificar
gcc --version
```

#### ▪ ARCH LINUX

```bash
# Instalar GCC
sudo pacman -S gcc

# Verificar
gcc --version
```

### ◆ INSTALACIÓN Y CONFIGURACIÓN DE NEOVIM

**Neovim** es un editor de texto moderno, potente y extensible, ideal para programar en C.

#### ▪ INSTALACIÓN DE NEOVIM

**Ubuntu/Debian:**
```bash
sudo apt update
sudo apt install neovim
```

**CentOS/RHEL:**
```bash
sudo yum install neovim
```

**Fedora:**
```bash
sudo dnf install neovim
```

**Arch Linux:**
```bash
sudo pacman -S neovim
```

#### ▪ CONFIGURACIÓN BÁSICA DE NEOVIM

1. **Crear directorio de configuración:**
```bash
mkdir -p ~/.config/nvim
```

2. **Crear archivo de configuración básico:**
```bash
nvim ~/.config/nvim/init.vim
```

3. **Configuración básica para programar en C:**
```vim
" Configuración básica para C
set number              " Mostrar números de línea
set tabstop=4          " Tamaño de tabulación
set shiftwidth=4       " Indentación
set expandtab          " Usar espacios en lugar de tabs
set autoindent         " Auto-indentación
set smartindent        " Indentación inteligente
set syntax=on          " Resaltado de sintaxis
set mouse=a            " Habilitar ratón

" Configuración específica para archivos .c
autocmd FileType c setlocal cindent
autocmd FileType c setlocal tabstop=4
autocmd FileType c setlocal shiftwidth=4
```

#### ▪ COMANDOS BÁSICOS DE NEOVIM

<table>
<tr>
<th width="30%">Comando</th>
<th width="70%">Descripción</th>
</tr>
<tr>
<td><code>nvim archivo.c</code></td>
<td>Abrir archivo para editar</td>
</tr>
<tr>
<td><code>i</code></td>
<td>Entrar en modo inserción</td>
</tr>
<tr>
<td><code>Esc</code></td>
<td>Salir del modo inserción</td>
</tr>
<tr>
<td><code>:w</code></td>
<td>Guardar archivo</td>
</tr>
<tr>
<td><code>:q</code></td>
<td>Salir de Neovim</td>
</tr>
<tr>
<td><code>:wq</code></td>
<td>Guardar y salir</td>
</tr>
<tr>
<td><code>:q!</code></td>
<td>Salir sin guardar</td>
</tr>
</table>

### ◆ EJERCICIO PRÁCTICO 2: VERIFICACIÓN DE INSTALACIONES

**Crear archivo de prueba:**

```bash
# Crear archivo de prueba con Neovim
nvim test.c

# En Neovim, presionar 'i' y escribir:
#include <stdio.h>
int main() { 
    printf("¡GCC y Neovim funcionan correctamente!\n"); 
    return 0; 
}

# Presionar Esc, luego :wq para guardar y salir

# Compilar y ejecutar
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

#### ▪ COMANDOS DE COMPILACIÓN Y EJECUCIÓN

```bash
# Compilar el programa
gcc hola_mundo.c -o hola_mundo

# Ejecutar el programa
./hola_mundo
```

**Explicación de comandos:**
- `gcc`: Invoca el compilador GNU C
- `hola_mundo.c`: Archivo fuente a compilar
- `-o hola_mundo`: Especifica el nombre del ejecutable de salida
- `./hola_mundo`: Ejecuta el programa compilado (el ./ indica directorio actual)

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

## ▓▓▓ RESUMEN DEL MÓDULO ▓▓▓

### ◆ CONCEPTOS DOMINADOS

<table>
<tr>
<td width="50%">

#### ► ENTORNO DE TRABAJO
- ✓ Navegación en terminal Linux
- ✓ Instalación de GCC y Neovim
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
