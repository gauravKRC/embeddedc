/**
* Question:Get a four-digit number from user and subtract 5 from that number if
ten’s digit position and 100’s digit position is same, then print the result.
Do not use “if”.
Example:Input: 7595 Output 7595,
Input: 3772 Output: 3767
    */
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=((((x%1000)/100)==((x%100)/10))*(x-5))+((((x%1000)/100)!=((x%100)/10))*x);
    printf("Result is:%d\n",y);
return 0;
}
