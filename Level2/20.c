/*
* Question:Write a program print total number of single digit Prime numbers
Answer:4
*/
#include <stdio.h>
int main(){
    int c=1;
    int p;
    printf("Enter the range 0 to: ");
    scanf("%d",&p);
loop:if(p>=0){
     int i=2;
    loop2:if(i<p){
        int z=p%i;
        if(z==0){
            i=p;
        }
        if(i==p-1){
            c++;
       }
        i++;
    goto loop2;
        }
   p--;
goto loop;
    }
    printf("#prime=%d\n",c);
return 0;
}
