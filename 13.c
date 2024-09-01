/**
* Question:Get a two-digit number from user and print the reverse of the number.
Example:Input: 56 Output 65 , Input: 59 Output: 95
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the two-digit number: ");
    scanf("%d",&x);
    y=((x/10)+((x%10)*10));
    printf("Result is:%d\n",y);
return 0;
}
