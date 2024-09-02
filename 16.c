/**
* Question:Get a four-digit number from user and only reverse the
last two digits of the number, then print the number.
Example:Input: 9561 Output 5961,Input: 3859 Output: 8359
    **/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the four-digit number: ");
    scanf("%d",&x);
    y=(((x/1000)*100)+(((x%1000)/100)*1000)+((((x%1000)%100)/10)*10)+((((x%1000)%100)%10)*1));
    printf("Result is:%d\n",y);
return 0;
}

