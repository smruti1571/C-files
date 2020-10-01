//1.WAP to display Fibonacci series upto n terms?
#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,n;
	printf("Enter the nth term : ");
	scanf("%d",&n);
	a=0;b=1;c=0;
	printf("Fibonacci Series upto %d terms : ",n);
    
	for(int i=1;i<=n;i++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}
