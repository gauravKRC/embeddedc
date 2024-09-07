/**
* Question:Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then
print the sum, otherwise print the difference.
Example:Input: 56 78 – Output: 22
Input: 14 65 - Output: 79
    */
#include <stdio.h>
int main(){
    int x1,x2,y;
    printf("Enter first number: ");
    scanf("%d",&x1);
    printf("Enter second number: ");
    scanf("%d",&x2);
    y=x1+x2;
    if(y>100){
        y=x1-x2;
    }
    printf("Result is:%d\n",y);
return 0;
}
