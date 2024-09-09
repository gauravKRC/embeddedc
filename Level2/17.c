/*
* Question:Write a program to get a number from user, print whether that number is
prime, and sum of digit is equal to 14.
Answer:Input: 59 - Output: Prime & Sum of Digits is 14
Input: 77 - Output: Not Prime but sum of digits is 14
Input: 13 - Output: Prime, but sum of Digits is not 14
*/
#include <stdio.h>
int main(){
    //define flag
    int p=0;
    int np=0;

    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
   int sum=0;
    int t=x;
loop1:if(t!=0){
        sum=sum+t%10;
        t /= 10;
        goto loop1;
    }
    int i=2;
loop2:if(i<x){
        int z=x%i;
        if(z==0){
          np=1;
          i=x;
        }
        if(i==x-1){
           p=1;
        }
        i++;
        goto loop2;
    }

   if(sum==14 && p==1 && np ==0){
        printf("Num:Prime,Sum=14\n");
      }
   else if(sum==14 && np==1 && p==0){
        printf("Num:!Prime,sum=14\n");
     }
   else if(sum!=14 && p==1 && np==0){
        printf("Num:Prime,sum!=14\n");
     }
   else{
       printf("Num:!Prime,sum!=14\n");
    }
return 0;
}
