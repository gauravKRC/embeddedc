/**
* Question:Get a three-digit number from user and print the one’s digit.
Example:Input: 456 Output 6. Input: 569 Output: 9
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter a three-digit number: ");
    scanf("%d",&x);
    y=((x%100)%10);
    printf("Result is:%d\n",y);
return 0;
}
