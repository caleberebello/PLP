#include <stdio.h>

void escreve_vetor(int vetor[], int n){
	for(int i = 0; i < n; i++){
		printf("Digite os valores do vetor: ");
		scanf("%d",&vetor[i]);
	}
}

void troca(int vetor[], int i, int j){
	int aux;
	aux=vetor[i];
	vetor[i]=vetor[j];
	vetor[j]=aux;
}

void desarranjo(int vetor[], int inf,int sup) {
	int aux1 = 0;
	if(inf==sup){
		for(int i=0;i<sup-1;i++){
			if(vetor[i] == i+1){
				aux1++;
			}
		}
		if(aux1==0){
			for(int i=0;i<sup-1;i++){
				printf("%d",vetor[i]);
			}
		}

		for(int i=0;i<sup-1;i++){
			troca(vetor, inf, i);
			desarranjo(vetor, inf+1, sup);
			troca(vetor, inf, i);
		}
	}
}
int main() {
	int n,vetor[n];
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n);
	escreve_vetor(vetor,n);
	desarranjo(vetor,0,n);
	return 0;
}
