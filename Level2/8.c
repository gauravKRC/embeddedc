/*
* Question:Write a loop program to print the two-digit even numbers, who’s sum of
digits are 6.
Answer:24
42
60
*/
#include <stdio.h>
int main(){
    int x;
    x=-80;
    int n;
    n=10;
loop:if(x<10){
    if((((n/10)+(n%10))==6) && (n%2==0)){
            printf("%d\n",n);
        }
        n=n+1;
        x=x+1;
    goto loop;
    }
return 0;
}
