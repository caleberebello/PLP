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

void permutacao(int vetor[], int k, int n) {
	if(k == sizeof(vetor[n])){
		for(int i=0;i<n-1;i++){
			printf("%d", vetor[i]);
		}
		printf("\n");
	} else {
		for(int i=k;i<sizeof(vetor[n]);i++){
			troca(vetor,k,i);
			permutacao(vetor, k+1, n);
			troca(vetor,k,i);
		}
	}
}

void listar_permutacao(int vetor[], int n){
	permutacao(vetor, 0, n);
}

int main() {
	int n,vetor[n];
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n);
	escreve_vetor(vetor,n);
	listar_permutacao(vetor, n);
	return 0;
}
