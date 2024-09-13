/*
* Question:
Write a program to print the total count of numbers which are less than
100000 and whose sum of digits is 14.
*/
#include <stdio.h>
int main(){
    int x=99999;
    int c=0;
loop:if(x!=0){
    int n=x;
    int sum=0;
    loop2:if(n!=0){
          sum=sum+n%10;
         n /= 10;
        goto loop2;
        }
      if(sum==14){
//            printf("%d\n",x);
        c++;
       }
    x--;
goto loop;
  }
printf("Count:%d\n",c);
return 0;
}
