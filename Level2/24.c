/*
* Question:Write a program get number from user print the total number of two-digit
perfect square numbers in the number.
Answer:Input: 163496481 - Output: 4
Input: 364925 - Output: 4
*/
#include <stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    int c=0;
loop:if(x>=10){
        int n=x%100;
        if(n==16 || n==25 || n==36 || n==49 || n==64 || n==81){
            c++;
        }
        x /= 10;
        goto loop;
    }
    printf("#2-digits perfect square:%d\n",c);
return 0;
}
