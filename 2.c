//2.WAP to check Armstrong Number?
#include<stdio.h>
#include<math.h>
int main()
{
	int num,on,rem,r=0,d;
	printf("Enter the number:");
	scanf("%d",&num);
	on=num;
	for(on=num;on!=0;++d)
	{
		on/=10;
	}
	for(on=num;on!=0;on/=10)
	{
		rem=on%10;
		r+=pow(rem,d);
	}
	if(r==num)
	printf("%d is an Armstrong Number",num);
	else if(r!=num)
	printf("%d is not an Armstrong Number",num);
	return 0;
}

