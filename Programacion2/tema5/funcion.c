#include ...

typedef struct {
	char *header;
	char **parrafos;
	int numParrafos;
} webData_t;

void main(int argc, char *argv[]) {
	char *frase = "...";
	webData_t web = {NULL, NULL, 0};

char *strtok_ (char *strm char *separadores) {
	static char *copy = NULL;
	static char *prevStr = NULL;
	static int i = 0;
	if (str != NULL) {
		copy = str;
	}
	...
}

char *parseahtml(char *pagina, char *tokenIni, char *tokenEnd) {
	char *prevPagina = NULL;
	
	if (pagina != NULL) {
		prevPagina = pagina;
	}
	
	//char *prevPagina = pagina;
	
	// Buscar tokens
	char *inicio = strstr(prevPagina, tokenIni);
	char *fin = strstr(prevPagina, tokenEnd);
	
	// ¿Encontrado?
	if (inicio == NULL || fin == NULL) {
		return NULL
	}
	
	// Mover puntero inicio
	inicio = inicio + strlen(tokenIni);
	
	// Tamaño frase
	int size = fin - inicio + 1;
	
	// Guardar frase
	char *frase = (char *) malloc(sizeof(char) * size);
	memcpy(frase, inicio, size-1);
	frase[size-1] = '\0';
	prevPagina = fin+strlen(tokenEnd);
	
	return frase;
}