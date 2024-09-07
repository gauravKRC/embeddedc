/**
* Question:Write a loop program to print sum of 1 to 5.
Answer:15
*/
#include <stdio.h>
int main(){
    int x;
    x=0;
    int sum;
    sum=0;
loop:if(x<6){
    sum=sum+x;
     x=x+1;
    goto loop;
    }
printf("Result is:%d\n",sum);
return 0;
}
