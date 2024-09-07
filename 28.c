/*
* Question:Get a three-digit number from user. If the sum of the one’s digit and
hundred’s digit is less than 10, then print “Success”, otherwise print
“Failure”.
Example:Input: 569 - Output Failure,
Input: 316 - Output: Success.
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the three digits number: ");
    scanf("%d",&x);
    if(((x/100)+(x%10))<10){
        printf("Success\n");
    }
    else{
        printf("Failure\n");
    }
return 0;
}

