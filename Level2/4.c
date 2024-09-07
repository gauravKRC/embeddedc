/*
* Question:Write a loop program to print sum of 6 to 1.
Answer:21
*/
#include <stdio.h>
int main(){
    int x;
    int sum;
    x=6;
    sum=0;
loop:if(x>0){
    sum=sum+x;
    x=x-1;
goto loop;
    }
printf("Result is:%d\n",sum);
return 0;
}


