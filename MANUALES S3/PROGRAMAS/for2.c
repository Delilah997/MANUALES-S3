#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j, m;
	puts("Ingresa un numero: ");
	scanf("%d",&m);
	for(i=0;i<m;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=m;i>0;i--){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	puts("Fin");
	system ("pause");
	return 0;
}
