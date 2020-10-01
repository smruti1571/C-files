#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, result = 0, d=0;
    printf("Enter a integer: ");
    scanf("%d", &num);
    originalNum = num;
    
    for(int i=0; originalNum!=0; i++)
    {
        originalNum /= 10;
        d++;
    }

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += pow(remainder,d);
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
