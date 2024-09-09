/*
* Question:Write a program to get a number from user and print the reverse of that
number
Answer:Input : 123456 - Output – 654321
Input : 76895439- Output – 93459867
Input : 675 – Output - 576
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
        x=x/10;
        a=a+ld;
        a=a*10;
        goto loop;
    }
    printf("%d\n",a/10);
return 0;
}
