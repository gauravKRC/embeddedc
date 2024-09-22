/*
* Question:
*****************************************
Get a number from user and count the number of zeros in that number
and print. Write your code inside the function. Do not Change the
format.
Examples:
Input: 100 Output: 2 . Input: 1060030 Output: 4.
*/
#include <stdio.h>
int find_no_of_zeros(int no);
int main(){
    int number,result;
    printf("Enter the number: ");
    scanf("%d",&number);
    result=find_no_of_zeros(number);
    printf("%d\n",result);
return 0;
}
int find_no_of_zeros(int no){
    int result;
    result=0;
     int c=0;
    if(no==0){
        c++;
        result=c;
    }
    while(no!=0){
        if(no%10==0){
             c++;
            result=c;
        }
        no/=10;
    }
    return result;
}

