/*
*Question:Write a program get number from user print the total number of single-
digit perfect square numbers in the number.
Answer:Input: 123456789 - Output: 3
Input: 987531 - Output: 2
*/
#include <stdio.h>
#include "1DPS.h"

int main(){
    int x;
    int c=0;
    printf("Enter the number : ");
    scanf("%d",&x);
loop:if(x!=0){
        int p=x%10;
        if(p == PS1 || p == PS2 || p == PS3){
            c++;
        }
        x /= 10;
    goto loop;
}
    printf("Enter:%d %d %d\n",PS1,PS2,PS3);
printf("#perfect square:%d\n",c);
return 0;
}
