/**
* Question:Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the
numbers. Print the sum of all the digits of the number whose sum of one’s and
hundred’s digits is bigger.
Example:Input: 856 978 – Output: 24
Input: 128 365 - Output: 11
    */
#include <stdio.h>
int main(){
    int x1,x2,y;
    printf("Enter first 3-digit number: ");
    scanf("%d",&x1);
    printf("Enter second 3-digit number: ");
    scanf("%d",&x2);
    if(((x1/100)+(x1%10))>((x2/100)+(x2%10))){
        y=((x1/100)+((x1%100)/10)+(x1%10));
    }
    else{
        y=((x2/100)+((x2%100)/10)+(x2%10));
    }
    printf("Result is:%d\n",y);
return 0;
}
