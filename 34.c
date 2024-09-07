/**
* Question:Get two 3-digit numbers from user. Print the difference between the one’s digit and
hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s
digit
Example:Input: 856 978 – Output: 1
Input: 128 365 - Output: 2
    */
#include <stdio.h>
int main(){
    int x1,x2,y;
    printf("Enter first three digit number: ");
    scanf("%d",&x1);
    printf("Enter second three digit number: ");
    scanf("%d",&x2);
    if(((x1%100)/10)>((x2%100)/10)){
        y=(x1%10)-(x1/100);
    }
    else{
        y=(x2%10)-(x2/100);
    }
    printf("Result is:%d\n",y);
return 0;
}
