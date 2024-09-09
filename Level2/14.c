/*
* Question:Write a program to get a number from user and interchange the first and
last digits and print the result.
Answer:Input : 123456 - Output – 623451
Input : 76895439- Output – 96895437
Input : 675 – Output - 576
    */
#include <stdio.h>
#include <math.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    int l,f,d;
    l=x%10;
    d=0;
    int n=x;
loop:if(n!=0){
        d++;
        n /= 10;
    goto loop;
    }
int z=(int)pow(10,d-1);
f=x/z;
printf("%d\n",(l*z)+(x-(f*z)-l)+f);
    return 0;
}

