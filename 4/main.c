#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int A[10];
	
int i,j;	
	
for(i=0;i<10;i++){
	
	scanf("%d",&A[i]);
	
}	
	
	
for(j=0;j<10;j++){
	
	printf("%d\n",A[j]);
	
}	
	
	getch();
	
	return 0;
}
