/**
* Question:Get a three-digit number from user and print the hundred’s digit.
Example:Input: 456 Output 4. Input: 569 Output: 5
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter three-digit number: ");
    scanf("%d",&x);
    y=x/100;
    printf("Result is:%d\n",y);
return 0;
    }


