# Guía-taller: simulación de un demultiplexor 1 a 4 en C

## Propósito
Observar cómo un selector binario dirige una entrada activa a una de cuatro salidas.

## Conceptos técnicos
Un demultiplexor recibe una entrada y usa líneas de selección para elegir cuál salida la recibe. En esta práctica, el selector tiene cuatro valores posibles: 0, 1, 2 y 3.

El programa utiliza operaciones de bajo nivel con bits:

- `entrada & 1u` comprueba si el bit menos significativo de la entrada está activo.
- `1u << selector` desplaza un bit hacia la posición indicada por el selector.
- `uint8_t` representa un valor entero de 8 bits sin signo.

Por ejemplo, si la entrada vale 1 y el selector vale 2, el desplazamiento produce `00000100` en binario, que corresponde a `0x04`.

## Materiales y herramientas
- Mac con Visual Studio Code.
- Apple Clang para compilar el programa.
- Archivo `demux_decode.c`.

Se utilizaron las bibliotecas estándar `stdio.h`, `stdint.h` y `assert.h`. La práctica se realizó como simulación en C y no requirió una biblioteca externa ni un componente físico.

## Pasos del taller
1. Abrir la carpeta `Taller_Bajo_Nivel` en VS Code.
2. Crear el archivo `demux_decode.c`.
3. Escribir la función `demux_decode` y el programa de pruebas.
4. Abrir **Terminal → Nuevo terminal**.
5. Compilar con:

       clang -std=c11 -Wall -Wextra -Wpedantic demux_decode.c -o demux_decode

6. Ejecutar con:

       ./demux_decode

7. Revisar que aparezcan las cuatro salidas esperadas y el mensaje `Todas las pruebas pasaron.`

## Resultados esperados

| Selector | Salida activada |
|---:|:---|
| 0 | `0x01` |
| 1 | `0x02` |
| 2 | `0x04` |
| 3 | `0x08` |

## Preguntas para practicar
1. ¿Qué salida se activa cuando el selector vale 2?
2. ¿Qué ocurre si la entrada vale 0?
3. ¿Por qué el programa devuelve 0 cuando el selector es mayor que 3?

## Comprobación
La función pasó las pruebas para los cuatro selectores. También se comprobó que una entrada apagada y un selector fuera del rango no activan ninguna salida.

## Límite de la práctica
El programa demuestra la lógica del demultiplexor mediante software. No accede a un sensor ni controla un circuito físico.