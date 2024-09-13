/*
*Question:
Write a program to print biggest 4-digit number which is divisible by 7
and 9.
*/
#include <stdio.h>
int main(){
    int x=9999;
while(x>=1000){
    int a=((x%10)+((x%100)/10)+((x%1000)/10)+(x/1000));
        if(a%9==0 && x%7==0){
            printf("Ans:%d\n",x);
            break;
                }
            x--;
    }
return 0;
}
