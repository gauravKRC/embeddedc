/*
* Question:
Get two numbers from user and compare the numbers. If same print
“Same” otherwise print “Not Same”. Write your code inside the function.
Do not Change the format.
Example:
Input: 123, 123 Output: Same. Input: 56789,12345 Output: “Not Same”
*/
#include <stdio.h>
int compare_numbers(int no1,int no2);
int main(){
    int result,number1,number2;
    printf("Enter the number1: ");
    scanf("%d",&number1);
    printf("Enter the number2: ");
    scanf("%d",&number2);
    result=compare_numbers(number1,number2);
    if(result==1){
        printf("Same\n");
    }else{
        printf("Not Same\n");
    }
return 0;
}
int compare_numbers(int no1,int no2){
    int result;
  /*  int q,r;
    if(no1>=no2 && no2!=0){
     q=no1/no2;
     r=no1%no2;
        printf("n1>=n2 && n2!=0\n");
    }else if(no1==0 && no2==0){
        q=1;
        r=0;
        printf("n1==0 && n2==0\n");
    }else if(no2>no1 && no1!=0){
     q=no2/no1;
     r=no2%no1;
        printf("n2>n1 && n1!=0\n");
    }*/
    if(no1==no2){
        result =1;
    }else{
        result=0;
    }
return result;
}
