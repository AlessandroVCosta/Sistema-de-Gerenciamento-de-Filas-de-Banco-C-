// balcao.h
#ifndef BALCAO_H
#define BALCAO_H

#include "fila.h"

typedef struct balcao {
    fila filaBalcao;
    cliente clienteAtual;
} Balcao;

void inicializarBalcao(Balcao* balcao);
void atenderCliente(Balcao* balcao, fila* filaBanco);
void liberarCliente(Balcao* balcao);
void exibirStatusBalcao(Balcao* balcao);

#endif // BALCAO_H

