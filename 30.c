/**
* Question:Get a four-digit number from user. If the sum of the ten’s digit and
hundred’s digit is equal to 10, and one of the digits is more than 7 then
print “Success”, otherwise print “Failure”.
Example:Input: 4649 – Output: Failure,
Input: 9286 - Output: Success.
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter four-digit number: ");
    scanf("%d",&x);
    if(((x%1000)/100)+((x%100)/10)==10){
        printf("Success\n");
    }
    else{
        printf("Failure\n");
    }
return 0;
}
