/*
* Question:Write a program to get a 4-digit number from user, print whether that
number’s middle two digits (hundred’s digit and ten’s digit) is prime.
Answer:Input: 6359 - Output: Not Prime
Input: 3517 - Output: Prime
*/
#include <stdio.h>
int main(){
    int x;
    printf("Enter 4-digits number: ");
    scanf("%d",&x);
    int t=(x%100)/10;
    int h=(x%1000)/100;
    int n=h*10+t;
    int i=2;
loop:if(i<n){
    int z=n%i;
    if(z==0){
        printf("!Prime\n");
        i=n;
    }
    if(i==n-1){
        printf("Prime\n");
        }
    i++;
goto loop;
    }
return 0;
}

