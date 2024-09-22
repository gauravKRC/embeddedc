/*
* Question:
Get a number from user and Check Prime or Not and print the result.
Write your code inside the function. Do not Change the format.
Example:Input: 61 Output Number is Prime. Input: 1200 Output: Number is not Prime.
*/
#include <stdio.h>
int isPrime(int no);
int main(){
    int result,number;
    printf("Enter the number: ");
    scanf("%d",&number);
    result=isPrime(number);
    if(result==1){
            printf("Number is prime\n");
    }else{
            printf("Number is not prime\n");
    }
return 0;
}

int isPrime(int no){
    int result;
    int i=2;
    while(i<no){
        printf("%d\n",i);
        if(no%i==0){
            result=0;
            i=no;
        }
        if(i==no-1){
            result=1;
        }
        i++;
    }
    return result;
}
