#include "circunferencia.h"

int pertenece(Circunferencia c, Punto p) {
    float dx = p.x - c.centro.x;
    float dy = p.y - c.centro.y;
    float dist2 = dx * dx + dy * dy;
    float r2 = c.radio * c.radio;

    return dist2 <= r2;  
}
