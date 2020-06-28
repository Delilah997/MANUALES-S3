#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j, n, m;
	puts("Ingresa un numero: ");
	scanf("%d",&m);
	puts("Ingresa un numero: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d ",i);
		for(j=1;j<=m;j++){
			printf("%d, ",(i*j));
		}
		printf("\n");
	}
	system ("pause");
	return 0;
}
