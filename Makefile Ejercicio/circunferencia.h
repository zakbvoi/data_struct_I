#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

typedef struct {
    float x;
    float y;
} Punto;

typedef struct {
    Punto centro;
    float radio;
} Circunferencia;

int pertenece(Circunferencia c, Punto p);

#endif
