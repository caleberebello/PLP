#include <stdio.h>

void escreve_vetor(int vetor[], int n){
	for(int i=0;i<n;i++){
		printf("Digite os valores do vetor: ");
		scanf("%d", &vetor[i]);
	}
}

void combinacao(int vetor[], int n) {
	int i, j, aux=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			printf("(%d, %d)\n", vetor[i], vetor[j]);
		}
	}
}

int main() {
	int n, vetor[n];
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	escreve_vetor(vetor,n);
	combinacao(vetor,n);
	return 0;
}
