/*
* Question:Write a program to get a number from user and print the sum of all
digits.
Answer:Input: 123456 - Output – 21
Input: 76895439 - Output – 51
Input: 675 – Output - 18
    */
#include <stdio.h>
int main(){
    int x;
    int ld;
    int a;
    a=0;
    printf("Enter the number: ");
    scanf("%d",&x);
loop:if(x!=0){
        ld=x%10;
        a=a+ld;
        x=x/10;
        goto loop;
    }
printf("Answer:%d\n",a);
    return 0;
}
