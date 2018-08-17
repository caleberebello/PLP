#include <stdio.h>
#define TAM 4

void combinacao(int vetor[]) {
	int i, j, aux;
	for(i=0;i<(TAM-1);i++){
		for(j=0;j<TAM;j++){
			printf("(%d, %d)\n",vetor[i],vetor[j]);
			aux++;
		}
	}
}

int main() {
	int vetor[TAM] = {1,2,3,4};
	combinacao(vetor);
	return 0;
}
