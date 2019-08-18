#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int f[10],p,q,i;

p=0;
q=p;

f[0]=0;
f[1]=1;
f[2]=1;
f[3]=0;
f[4]=1;
f[5]=0;
f[6]=0;
f[7]=1;
f[8]=1;
f[9]=0;

for(i=0;i<10;i++)
{
	
	if(f[i]==1)
	{
		p=p+1;
	}
else
{
	q=q+1;
}

}



if(p>q)
{
	printf("1winer");
}
else{
	printf("0winer");
}




	return 0;
}
