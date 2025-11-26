#include <stdio.h>
#include "circunferencia.h"

int main() {
    Circunferencia c;
    Punto p;

    printf("Ingrese el centro (X Y): ");
    scanf("%f %f", &c.centro.x, &c.centro.y);

    printf("Ingrese el radio: ");
    scanf("%f", &c.radio);

    printf("Ingrese el punto a verificar (x y): ");
    scanf("%f %f", &p.x, &p.y);

    if (pertenece(c, p))
        printf("Sí pertenece\n");
    else
        printf("No pertenece\n");

    return 0;
}
