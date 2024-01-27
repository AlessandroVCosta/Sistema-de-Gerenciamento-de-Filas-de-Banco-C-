// menu.c
#include "menu.h"
#include "Fila.h"
#include "balcao.h"
#include <stdio.h>

void menuPrincipal(fila* filaBanco) {
    int escolha;
    do {
    	
        printf("\n### Menu Principal ###\n");
        printf("1. Cliente\n");
        printf("2. Funcion�rio\n");
        printf("3. Relat�rio\n");
        printf("0. Sair\n");

        printf("Escolha uma op��o: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                menuCliente(filaBanco);
                break;
            case 2:
                menuFuncionario(filaBanco);
                break;
            case 3:
                menuRelatorio(filaBanco);
                break;
            case 0:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (escolha != 0);
}

void menuCliente(fila* filaBanco) {
    int opcaoCliente;
    int prioridade;

    printf("\n### Menu Cliente ###\n");
    printf("Selecione uma op��o\n");
    printf("1. Levantamento\n");
    printf("2. Dep�sito\n");
    printf("3. Transfer�ncia\n");
    printf("4. Abertura de conta\n");
    printf("5. Atendimento a Cheques\n");
    printf("6. Resolu��o de Problemas\n");
    printf("7. Outro\n");
    printf("0. Voltar\n");

    printf("Escolha uma opera��o: ");
    scanf("%d", &opcaoCliente);

    if (opcaoCliente != 0) {
        printf("Escolha a prioridade (1 para priorit�rio, 2 para n�o priorit�rio): ");
        scanf("%d", &prioridade);

        cliente novoCliente = criarCliente(prioridade);
        enfileirarCliente(filaBanco, novoCliente);

        printf("Cliente enfileirado com sucesso!\n");
    }
}

void menuFuncionario(fila* filaBanco) {
    int opcaoBalcao;
    Balcao balcao1, balcao2;

    printf("\n### Menu Funcion�rio ###\n");
    printf("1. Balc�o 1\n");
    printf("2. Balc�o 2\n");
    printf("0. Voltar\n");

    printf("Escolha um balc�o: ");
    scanf("%d", &opcaoBalcao);

    switch (opcaoBalcao) {
        case 1:
            menuAtendimento(&balcao1, filaBanco);
            break;
        case 2:
            menuAtendimento(&balcao2, filaBanco);
            break;
        case 0:
            printf("Voltando ao menu principal.\n");
            break;
        default:
            printf("Op��o inv�lida. Tente novamente.\n");
    }
}

void menuRelatorio() {
    int escolhaRelatorio;

    printf("\n### Menu Relat�rio ###\n");
    printf("1. Relat�rio Geral\n");
    printf("2. Procurar por Senha\n");
    printf("0. Voltar\n");

    printf("Escolha uma op��o: ");
    scanf("%d", &escolhaRelatorio);

    switch (escolhaRelatorio) {
        case 1:
            //  l�gica para o Relat�rio Geral
            break;
        case 2:
            //  l�gica para procurar por senha
            break;
        case 0:
            printf("Voltando ao menu principal.\n");
            break;
        default:
            printf("Op��o inv�lida. Tente novamente.\n");
    }
}

void menuAtendimento(Balcao* balcao, fila* filaBanco) {
    int opcaoAtend;
	Balcao balcao1, balcao2;
    do {
        printf("\n### Menu Atendimento ###\n");
        printf("1. Abrir balc�o\n");
        printf("2. Atender Cliente\n");
        printf("3. Liberar cliente atual\n");
        printf("4. Exibir status do balc�o\n");
        printf("0. Voltar\n");

        printf("Escolha uma op��o: ");
        scanf("%d", &opcaoAtend);

        switch (opcaoAtend) {
            case 1:
                inicializarBalcao(balcao);
                printf("Balc�o aberto.\n");
                break;
            case 2:
                atenderCliente(balcao, filaBanco);
                printf("Cliente atendido.\n");
                break;
            case 3:
                liberarCliente(balcao);
                printf("Cliente liberado.\n");
                break;
            case 4:
                exibirStatusBalcao(balcao);
                break;
            case 0:
                printf("Voltando ...\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (opcaoAtend != 0);
}

