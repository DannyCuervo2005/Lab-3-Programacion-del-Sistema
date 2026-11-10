# Práctica: demultiplexor 1 a 4 en C

## Objetivo
 Se verificó que una entrada activa llegue a una sola salida, según el valor del selector.

## Equipo y herramientas
- MacBook Air con macOS Monterey 12.7.6
- Visual Studio Code
- Apple Clang 14
- Lenguaje C

## Librerías utilizadas
- `stdio.h`: mostrar los resultados en la terminal.
- `stdint.h`: usar el tipo de dato `uint8_t`.
- `assert.h`: comprobar automáticamente los resultados esperados.

## Procedimiento
Se creó el archivo `demux_decode.c`, se compiló con Clang y se ejecutó desde la terminal:

    clang -std=c11 -Wall -Wextra -Wpedantic demux_decode.c -o demux_decode
    ./demux_decode

## Resultado
Las cuatro pruebas pasaron. Para los selectores 0, 1, 2 y 3, el programa activó respectivamente las salidas `0x01`, `0x02`, `0x04` y `0x08`.

## Alcance de la práctica
Se comprobó la lógica mediante una simulación en C. No se conectó ni se controló un demultiplexor físico.


