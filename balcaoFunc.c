// balcao.c
#include "balcao.h"
#include <stdio.h>

void inicializarBalcao(Balcao* balcao) {
    inicializarFila(&(balcao->filaBalcao));
    balcao->clienteAtual.senha = -1;  // Indica que não há cliente atual
    printf(" inicializada");
    
}

void atenderCliente(Balcao* balcao, fila* filaBanco) {
    if (balcao->clienteAtual.senha == -1) {
        // Se não há cliente , tenta pegar um da fila
        balcao->clienteAtual = desenfileirarCliente(filaBanco);
        if (balcao->clienteAtual.senha != -1) {
            printf("Atendendo cliente no balcão. Senha: %d\n", balcao->clienteAtual.senha);
        } else {
            printf("Não há clientes na fila para atender no balcão.\n");
        }
    } else {
        printf("Já há um cliente sendo atendido no balcão. Utilize a opção 'Cliente seguinte'.\n");
    }
}

void liberarCliente(Balcao* balcao) {
    balcao->clienteAtual.senha = -1;
    printf("Balcão fechado.\n");
}

void exibirStatusBalcao(Balcao* balcao) {
    if (balcao->clienteAtual.senha != -1) {
        printf("Balcão aberto. Atendendo cliente. Senha: %d\n", balcao->clienteAtual.senha);
    } else {
        printf("Balcão fechado.\n");
    }
}

