#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j;
	for(i=0;i<5;i++){
		printf("Para i: %d\t",i);
		for(j=0;j<3;j++){
			printf("j%d, ",j);
		}
		printf("\n\n");
	}
	system ("pause");
	return 0;
}
