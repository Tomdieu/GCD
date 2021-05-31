#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,q,r,pgcd,al,bl;
	printf("Enter two positive number:\n");
	printf("Number 1 :");scanf("%d",&a);
	printf("Number 2 :");scanf("%d",&b);
	a=abs(a);
	b=abs(b);
	if(a<b)
	{
		bl=b;al=a;
	}
	else
	{
		bl=a;al=b;
	}
	do
	{
		q=bl/al;
		r=bl%al;
		printf("%d=%d*%d+%d\n",bl,al,q,r);
		bl=al;
		al=r;
	}while(r!=0);
	
	printf("The gcd of %d and %d is %d ",a,b,bl);

}
