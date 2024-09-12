/*
* Question:Write a program get number from user print the total number of two-digit
odd numbers in the number.
Answer:Input: 12345678 - Output: 3
Input: 987531 - Output: 4
*/
#include <stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    int c=0;
loop:if(x>=10){
        int z=(x%100);
        if(z%2!=0){
            c++;
        }
        x /=10;
        goto loop;
    }
printf("#2-didits Odd in number:%d\n",c);
    return 0;
}














