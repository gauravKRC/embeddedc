/**
* Question:Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
Example:Input: 56 78 – Output: 15
Input: 14 65 - Output: 11
    */
#include <stdio.h>
int main(){
    int x1,x2,y;
    printf("Enter first number: ");
    scanf("%d",&x1);
    printf("Enter second number: ");
    scanf("%d",&x2);
    if(x1>x2){
        y=(x1/10)+(x1%10);
    }
    else{
        y=(x2/10)+(x2%10);
    }
    printf("Result is:%d\n",y);
return 0;
}

