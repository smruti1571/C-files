//7.WAP to swap two numbers by using call by value and call by reference
//  and using just two variables.
#include<stdio.h>
void swap_call_by_reference(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void swap_call_by_value(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;

}
void swap_with_two_var(int a,int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}    
    
int main()
{
    int n1,n2;
    printf("Enter the values of n1 and n2 : ");
    scanf("%d %d",&n1,&n2);
    printf("Vlues before swapping n1 = %d & n2 = %d\n",n1,n2);
    swap_call_by_reference(&n1,&n2);
    printf("Vlues after swapping using call by reference n1 = %d & n2 = %d\n",n1,n2);
    swap_call_by_value(n1,n2);
    printf("Vlues after swapping using call by value n1 = %d & n2 = %d\n",n1,n2);
    swap_with_two_var(n1,n2);
    printf("Vlues after swapping using just two variables n1 = %d & n2 = %d\n",n1,n2);
    return 0;
}
