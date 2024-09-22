/*
* Question:*****************************************
Get a number from user and reverse that number and print. Write your
code inside the function. Do not Change the format.
Example:Input: 123 Output: 321. Input: 56789 Output: 98765.
*/
#include <stdio.h>
#include <math.h>
int reverse_number(int no);
int main(){
    int number,result;
    printf("Enter the number: ");
    scanf("%d",&number);
    result=reverse_number(number);
    printf("%d\n",result);
return 0;
}
int reverse_number(int no){
    int n=no;
    int result;
    int sum=0;
    while(n!=0){
        sum=sum*10;
        sum=(sum+n%10);
        n/=10;
       }
      result=sum;
    return result;
}
