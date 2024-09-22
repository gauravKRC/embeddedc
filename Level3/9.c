/*
* Question:*****************************************
Get a two-digit number from user swap the digits.
Example:Input: 34 Output: 43. Input: 56 Output: 65
    */
#include <stdio.h>
int swap_digits(int no);
int main(){
    int number,result;
    printf("Enter two-digits the number: ");
    scanf("%d",&number);
    result=swap_digits(number);
    printf("%d\n",result);
return 0;
}
int swap_digits(int no){
    int result;
    result=(no%10)*10+(no/10)*1;
    return result;
}
