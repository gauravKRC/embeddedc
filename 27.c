/**
* Question:Get a three-digit number from user. If the sum of the digits is 10 then
print “Success”, otherwise print “Failure”.
Example:Input: 956 - Output Failure,
Input: 127 - Output: Success.
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter three digits number: ");
    scanf("%d",&x);
    if(((x/100)+((x%100)/10)+(x%10))==10){
        printf("Success\n");
    }
    else{
        printf("Failure\n");
    }
return 0;
}
