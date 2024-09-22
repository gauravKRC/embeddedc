/*
*Question:
Get a number from user and Check whether the sum of digits is 14 and
print the result. Write your code inside the function. Do not Change the
format.
*/
#include <stdio.h>
int sum14(int no);

int main(){
    int result,number;
    printf("Enter the number: ");
    scanf("%d",&number);
    result=sum14(number);
    if(result==1){
        printf("Sum of digits is 14\n");
    }
    else{
        printf("Sum of digits is not 14\n");
    }
return 0;
    }
int sum14(int no){
    int result;
        int sum=0;
     while(no!=0){
         sum=sum+no%10;
         no /=10;
        }
     if(sum==14){
         result=1;
        }
        else{
         result=0;
        }
return result;
    }
