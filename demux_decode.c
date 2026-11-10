#include <assert.h>
#include <stdint.h>
#include <stdio.h>

uint8_t demux_decode(uint8_t entrada, uint8_t selector) {
    if (selector > 3 || (entrada & 1u) == 0u) {
        return 0;
    }

    return (uint8_t)(1u << selector);
}

int main(void) {
    const uint8_t salidas_esperadas[4] = {0x01, 0x02, 0x04, 0x08};

    for (uint8_t selector = 0; selector < 4; selector++) {
        uint8_t salida = demux_decode(1, selector);

        assert(salida == salidas_esperadas[selector]);
        printf("Selector %u -> salida 0x%02X: correcto\n", selector, salida);
    }

    assert(demux_decode(0, 2) == 0);
    assert(demux_decode(1, 4) == 0);

    printf("Todas las pruebas pasaron.\n");
    return 0;
}
