/*
* Question:*****************************************
Get a number from user, find the number of digits and print the same.
Example:Input: 34678 Output: 5. Input: 12345678 Output: 8
    */
#include <stdio.h>
int count_digits(int no);
int main(){
    int number,result;
    printf("Enter the number: ");
    scanf("%d",&number);
    result=count_digits(number);
    printf("%d\n",result);
return 0;
}
int count_digits(int no){
    int result;
    result=0;
    if(no==0){
        result++;
    }
    while(no!=0){
        int n=no%10;
        result++;
        no/=10;
    }
return result;
}
