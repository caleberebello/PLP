#include <stdio.h>

void escreve_vetor(int vetor[], int n){
	for(int i = 0; i < n; i++){
		printf("Digite os valores do vetor: ");
		scanf("%d",&vetor[i]);
	}
}

void troca(int vetor[], int i, int j){
	int aux=0;
	aux=vetor[i];
	vetor[i]=vetor[j];
	vetor[j]=aux;
}

void desarranjo(int vetor[], int k, int n) {
	int aux=0;
	
	if(k == sizeof(vetor[n])){
		for(int i=0;i<n;i++){
			if(vetor[i] == i + 1){
				aux++;
			}
		}
		if(aux == 0){
			for(int i=0; i<n;i++){
				printf("%d",vetor[i]);
			}
			printf("\n");
		}
	} else {
		for(int i=k;i<sizeof(vetor[n]);i++){
			troca(vetor,k,i);
			desarranjo(vetor, k+1, n);
			troca(vetor,k,i);
		}
	}
}

int main() {
	int n,vetor[n];
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n);
	escreve_vetor(vetor,n);
	desarranjo(vetor,0, n);
	return 0;
}
