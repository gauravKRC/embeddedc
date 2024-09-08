/*
* Question:Write a loop program to print the sum of two-digit numbers whose
one’s digit is 5.
Answer:495
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
    if((n%10)==5){
            a=a+n;
        }
    n++;
    x++;
    goto loop;
    }
printf("Answer:%d\n",a);
return 0;
}
