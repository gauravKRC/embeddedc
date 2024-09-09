/*
* Question:Write a loop program to print the sum of two-digit odd numbers, whose
ten’s digit is 7.
Answer:375
*/
#include <stdio.h>
int main(){
    int x;
    x=-80;
    int n;
    n=10;
    int a;
    a=0;
loop:if(x<10){
    if((n%2!=0)&&((n/10)==7)){
            a=a+n;
        }
        n=n+1;
        x=x+1;
    goto loop;
    }
    printf("Answer is:%d\n",a);
return 0;
}
