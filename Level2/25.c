/*
* Question:Write a program get number from user print the total number of single-
digit prime numbers in the number.
Answer:Input: 163496481 - Output: 1
Input: 364925 - Output: 3
*/
#include <stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    int c=0;
loop:if(x!=0){
        int n=x%10;
        if(n==2 || n==3 || n==5 || n==7){
                c++;
        }
        x /= 10;
goto loop;
    }
printf("#1-digit prime in number:%d\n",c);
return 0;
}
