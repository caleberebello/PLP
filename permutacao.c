#include <stdio.h>
#define TAM 3

void permutacao(int vetor[]) {
	int i,j,k,aux=0;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			for(k=0;k<TAM;k++){
				if(vetor[i]==vetor[j]==vetor[k]){
					aux++;
				} else {
					printf("(%d, %d, %d)\n",vetor[i],vetor[j],vetor[k]);
					aux++;
				}
			}
		}
	}
}

int main() {
	int vetor[TAM] = {1,2,3};
	permutacao(vetor);
	return 0;
}
