/**
* Question:Get a four-digit number from user and only reverse the
first two digits of the number, then print the number.
Example:Input: 9561 Output 9516,Input: 3859 Output: 3895
    */
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the four-digit number: ");
    scanf("%d",&x);
    y=(((x/1000)*1000)+(((x%1000)/100)*100)+(((x%1000)%100)/10)+((((x%1000)%100)%10)*10));
    printf("Result is:%d\n",y);
return 0;
}

