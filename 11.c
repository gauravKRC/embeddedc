/**
* Question:Get a two-digit number from user and print sum the digits.
Example:Input: 56 Output 11. Input: 69 Output: 15
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the three-digit number: ");
    scanf("%d",&x);
    y=((x/10)+(x%10));
    printf("Result is:%d\n",y);
return 0;
}
