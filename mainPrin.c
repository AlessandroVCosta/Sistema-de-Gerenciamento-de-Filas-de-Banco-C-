#include "fila.h"
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    fila filaBanco;
    inicializarFila(&filaBanco);

    menuPrincipal(&filaBanco);   

    // Liberar recursos alocados, se necessário
    return 0;
}
