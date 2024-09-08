/*
* Question:Write a loop program to print the two-digit odd numbers, below 20.
Answer:11
13
15
17
19
*/
#include <stdio.h>
int main(){
    int x;
    x=0;
    int num;
    num=10;
loop:if(x<10){
    num=num+1;
    if(num%2!=0){
    printf("%d\n",num);
        }
    x=x+1;
    goto loop;
    }
return 0;
}

