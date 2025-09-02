# ═══════════════════════════════════════════════════════════════════════════════
# │                    GUÍA DE EJERCICIOS - MÓDULO 2                          │
# │                     Entorno de Trabajo y C Básico                         │
# ═══════════════════════════════════════════════════════════════════════════════

## ▓▓▓ LISTA DE EJERCICIOS PRÁCTICOS ▓▓▓

### ◆ EJERCICIOS BÁSICOS (Seguir en orden)

#### ▪ EJERCICIO 1: PRIMER PROGRAMA EN C
**Archivo:** `01_hola_mundo.c`
- **Objetivo:** Familiarizarse con la sintaxis básica de C
- **Conceptos:** `#include`, `printf`, `return`
- **Compilación:** `gcc 01_hola_mundo.c -o hola_mundo`

#### ▪ EJERCICIO 2: PRESENTACIÓN PERSONALIZADA
**Archivo:** `02_presentacion_personal.c`
- **Objetivo:** Crear un programa personalizado de presentación
- **Conceptos:** `printf`, formato de salida, caracteres especiales
- **Práctica:** Modificar con información personal del estudiante

#### ▪ EJERCICIO 3: VARIABLES BÁSICAS
**Archivo:** `03_variables_basicas.c`
- **Objetivo:** Practicar declaración, inicialización y uso de variables
- **Conceptos:** `int`, `float`, `char`, especificadores de formato
- **Elementos:** `sizeof()`, tipos de datos, formato de salida

#### ▪ EJERCICIO 4: ENTRADA DE DATOS
**Archivo:** `04_entrada_datos.c`
- **Objetivo:** Practicar la entrada de datos del usuario
- **Conceptos:** `scanf`, operador `&`, validación básica
- **Validaciones:** Edad, altura, clasificaciones simples

#### ▪ EJERCICIO 5: OPERACIONES MATEMÁTICAS
**Archivo:** `05_operaciones_matematicas.c`
- **Objetivo:** Implementar operaciones aritméticas fundamentales
- **Conceptos:** `+`, `-`, `*`, `/`, `%`, operadores de asignación
- **Características:** Análisis de resultados, comparaciones

#### ▪ EJERCICIO 6: MATEMÁTICAS AVANZADAS
**Archivo:** `06_math_avanzado.c`
- **Objetivo:** Utilizar la biblioteca `math.h`
- **Conceptos:** `pow()`, `sqrt()`, `fabs()`, `floor()`, `ceil()`
- **Compilación:** `gcc archivo.c -o programa -lm`

#### ▪ EJERCICIO 7: PRÁCTICA DE COMPILACIÓN
**Archivo:** `07_practica_compilacion.c`
- **Objetivo:** Practicar diferentes opciones de compilación
- **Conceptos:** flags de GCC, warnings, debugging
- **Comandos:** `-Wall`, `-g`, `-O2`, `-std=c99`

### ◆ PROYECTO FINAL DEL MÓDULO

#### ▪ CALCULADORA CIENTÍFICA COMPLETA
**Archivo:** `PROYECTO_FINAL_calculadora.c`
- **Objetivo:** Integrar todos los conceptos del módulo
- **Características:**
  - Operaciones básicas y avanzadas
  - Validaciones completas
  - Análisis estadístico
  - Formato profesional
  - Tabla de multiplicar

---

## ▓▓▓ INSTRUCCIONES DE COMPILACIÓN ▓▓▓

### ◆ COMANDOS BÁSICOS

```bash
# Compilación estándar
gcc archivo.c -o programa

# Con biblioteca matemática
gcc archivo.c -o programa -lm

# Con todas las advertencias
gcc -Wall archivo.c -o programa

# Con debugging
gcc -g -Wall archivo.c -o programa -lm
```

### ◆ EJECUCIÓN

```bash
# En Linux/Mac
./programa

# En Windows
programa.exe
```

---

## ▓▓▓ PROGRESIÓN RECOMENDADA ▓▓▓

```
SEMANA 1: Configuración del entorno
├── Instalación de GCC
├── Ejercicios 1-2: Primeros programas
└── Práctica de compilación básica

SEMANA 2: Variables y entrada/salida
├── Ejercicios 3-4: Variables y scanf
├── Ejercicio 5: Operaciones básicas
└── Validaciones simples

SEMANA 3: Operaciones avanzadas
├── Ejercicio 6: Biblioteca math.h
├── Ejercicio 7: Opciones de compilación
└── Proyecto final

EVALUACIÓN: Proyecto integrador
├── Demostración de conceptos
├── Código limpio y funcional
└── Presentación de resultados
```

---

## ▓▓▓ OBJETIVOS DE APRENDIZAJE ▓▓▓

### ◆ AL COMPLETAR TODOS LOS EJERCICIOS, EL ESTUDIANTE PODRÁ:

#### ▪ ENTORNO DE DESARROLLO
- [ ] Instalar y configurar GCC correctamente
- [ ] Navegar en línea de comandos (CMD/Linux)
- [ ] Compilar programas con diferentes flags
- [ ] Ejecutar programas desde terminal

#### ▪ PROGRAMACIÓN EN C
- [ ] Escribir programas básicos con estructura correcta
- [ ] Declarar y usar variables de diferentes tipos
- [ ] Implementar entrada/salida con printf/scanf
- [ ] Realizar operaciones matemáticas básicas y avanzadas
- [ ] Aplicar validaciones básicas
- [ ] Integrar conceptos en proyectos funcionales

#### ▪ MEJORES PRÁCTICAS
- [ ] Escribir código limpio y comentado
- [ ] Usar nombres de variables descriptivos
- [ ] Validar entradas del usuario
- [ ] Formatear salida de manera profesional
- [ ] Manejar errores comunes de compilación

---

## ▓▓▓ SOLUCIÓN DE PROBLEMAS COMUNES ▓▓▓

### ◆ ERRORES DE COMPILACIÓN

#### ▪ "COMMAND NOT FOUND: gcc"
```bash
# Verificar instalación
gcc --version

# Si no está instalado:
# Ubuntu/Debian: sudo apt install gcc
# CentOS/RHEL: sudo yum install gcc
# Windows: Instalar MinGW o TDM-GCC
```

#### ▪ "UNDEFINED REFERENCE TO 'pow'"
```bash
# Falta enlazar biblioteca matemática
gcc archivo.c -o programa -lm
```

#### ▪ "EXPECTED ';' BEFORE '}'"
```c
// Verificar que todas las líneas terminen en ;
printf("Hola");  // ← Correcto
return 0;        // ← Correcto
```

### ◆ ERRORES DE EJECUCIÓN

#### ▪ SCANF NO FUNCIONA CORRECTAMENTE
```c
// Para char después de números, usar espacio
scanf("%d", &numero);
scanf(" %c", &caracter);  // ← Espacio antes de %c
```

#### ▪ VALORES INESPERADOS EN VARIABLES
```c
// Siempre inicializar variables
int numero = 0;        // ← Inicializado
float precio = 0.0;    // ← Inicializado
```

---

## ▓▓▓ RECURSOS ADICIONALES ▓▓▓

### ◆ DOCUMENTACIÓN
- **Manual de GCC:** https://gcc.gnu.org/onlinedocs/
- **Referencia de C:** https://en.cppreference.com/w/c
- **Printf/Scanf:** Manual pages o documentación online

### ◆ HERRAMIENTAS ÚTILES
- **Editor de código:** VS Code, Code::Blocks, Dev-C++
- **Compilador online:** https://www.onlinegdb.com/online_c_compiler
- **Debugger:** GDB para encontrar errores en tiempo de ejecución

### ◆ PRÁCTICA ADICIONAL
- Modificar los ejercicios con diferentes valores
- Crear variaciones de los programas
- Experimentar con diferentes tipos de datos
- Practicar diferentes opciones de compilación

---

## ▓▓▓ EVALUACIÓN Y RETROALIMENTACIÓN ▓▓▓

### ◆ CRITERIOS DE EVALUACIÓN

<table>
<tr>
<th width="25%">Aspecto</th>
<th width="15%">Peso</th>
<th width="60%">Descripción</th>
</tr>
<tr>
<td><strong>Funcionalidad</strong></td>
<td>40%</td>
<td>El programa compila y ejecuta correctamente</td>
</tr>
<tr>
<td><strong>Estructura</strong></td>
<td>20%</td>
<td>Código bien organizado y comentado</td>
</tr>
<tr>
<td><strong>Validaciones</strong></td>
<td>20%</td>
<td>Manejo adecuado de errores y casos especiales</td>
</tr>
<tr>
<td><strong>Formato</strong></td>
<td>20%</td>
<td>Salida clara y presentación profesional</td>
</tr>
</table>

### ◆ RETROALIMENTACIÓN CONSTRUCTIVA
- Revisar código línea por línea con el estudiante
- Explicar errores comunes y cómo evitarlos
- Demostrar mejores prácticas de programación
- Proporcionar ejercicios adicionales según necesidades

---

<div align="center">

```
╔══════════════════════════════════════════════════════════════════════════════╗
║                                                                              ║
║                        ¡GUÍA DE EJERCICIOS COMPLETADA!                     ║
║                                                                              ║
║              Herramientas para dominar C básico y entorno                   ║
║                                                                              ║
║                        Siguiente nivel:                                     ║
║                    MÓDULO 3 - Estructuras de Control                        ║
║                                                                              ║
╚══════════════════════════════════════════════════════════════════════════════╝
```

</div>
