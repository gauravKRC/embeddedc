/**
* Question:Get a two-digit number from user. If the sum of the digits is 10 then print
“Success”, otherwise print “Failure”.
Example:Input: 56 - Output Failure,
Input: 37 - Output: Success.
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    if((x/10)+(x%10)==10){
        printf("Success\n");
    }
    else{
        printf("Failure\n");
    }
return 0;
}
