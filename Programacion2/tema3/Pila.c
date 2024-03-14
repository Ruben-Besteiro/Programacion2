#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int numero;
    struct nodo *siguiente;
};

void MeterNodo(int num, struct nodo **pila);
void SacarNodo(struct nodo **pila);
int Vacia(struct nodo *pila);
void ImprimirPila(struct nodo *pila);

void main() {
    struct nodo *pila = NULL;
    int n = 0;
    int numero;
    do {
        printf("Pulsa 1 para hacer un push\n");
        printf("Pulsa 2 para hacer un pop\n");
        printf("Pulsa 3 para imprimir la pila\n");
        printf("Pulsa 4 para salir\n");
        scanf("%d", &numero);
        switch(numero) {
            case 1:
                MeterNodo(n, &pila);
                n++;
                break;
            case 2:
                SacarNodo(&pila);
                n--;
                break;
            case 3:
                ImprimirPila(pila);
                break;
            case 4:
				exit(0);
                break;
            default:
                printf("Eres tonto\n");
        }
    } while(numero != 4);
}


void MeterNodo(int num, struct nodo **pila) {
    struct nodo *nuevo = (struct nodo *) malloc(sizeof(struct nodo));
    nuevo->numero = num;
    nuevo->siguiente = *pila;
    *pila = nuevo;
}

void SacarNodo(struct nodo **pila) {
    if (*pila == NULL) {
        printf("La pila esta vacia\n");
        return;
    }
    struct nodo *temp = *pila;
    *pila = (*pila)->siguiente;
    free(temp);
}

int Vacia(struct nodo *pila) {
    return pila == NULL;
}

void ImprimirPila(struct nodo *pila) {
    if (pila == NULL) {
        printf("La pila esta vacia\n");
        return;
    }
    struct nodo *temp = pila;
    while (temp != NULL) {
        printf("%d ", temp->numero);
        temp = temp->siguiente;
    }
    printf("\n");
}