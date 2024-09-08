/*
* Question:Write a loop program to print the two-digit odd numbers, who’s sum of
digits are 7.
Answer:25
43
61*/
#include <stdio.h>
int main(){
    int x;
    x=0;
    int n;
    n=10;
loop:if(x<100){
        n=n+1;
    x=(n/10)+(n%10);
        if(x==7){
            printf("%d\n",n);
        }
        x=x+1;
goto loop;
    }
return 0;
}
