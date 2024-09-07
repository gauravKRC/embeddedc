/**
* Question:Get a three-digit number from user and subtract 5 from that number if
one’s digit number and 100’s digit number are same, then print the
result. Do not use “if”.
Example:Input: 595 Output 590,
Input: 372 Output: 372
    */

#include <stdio.h>
int main(){
    int y,x;
    printf("Emter the number: ");
    scanf("%d",&x);
    y=(((x/100)==(x%10))*(x-5))+(((x/100)!=(x%10))*x);
    printf("Result is:%d\n",y);
return 0;
}
