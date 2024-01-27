#ifndef FILA_H
#define FILA_H

#include "cliente.h"

typedef struct No {
    cliente dados;
    struct No* prox;
} NoFila;

typedef struct Fila {
    NoFila* inicio, *fim;
   
} fila;

void inicializarFila(fila *filaBanco);
void enfileirarCliente(fila* filaBanco, cliente novoCliente);
cliente desenfileirarCliente(fila* filaBanco);

#endif // FILA_H
