#include <stdio.h>
#include <stdlib.h>
int main(){
	int A[10];
	int B[10];
	B[0]=3;
	B[1]=4;
	B[2]=6;
	B[3]=8;
	B[4]=9;
	B[5]=1;
	B[6]=2;
	B[7]=3;
	B[8]=0;
	B[9]=9;
	
	A[0]=3;
	A[1]=5;
	A[2]=6;
	A[3]=8;
	A[4]=4;
	A[5]=7;
	A[6]=8;
	A[7]=5;
	A[8]=3;
	A[9]=1;
	
	int c[5];
	c[0]=(A[3]%(B[2]/2));
	c[1]=B[A[1]]-A[9];
	c[2]=A[0]+A[2+1];
	c[3]=A[5]+B[5];
	c[14]=(A[3]/B[2])/2;
	
	printf("%d\n",c[0]);
	printf("%d\n",c[1]);
	printf("%d\n",c[2]);
	printf("%d\n",c[3]);
	printf("%d\n",c[4]);
	
	system ("pause");
	return 0;
}
