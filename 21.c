/**
* Question:Get a number from user and subtract 5 from that number if the number
is odd, then print the result. Do not use “if”.
Example:Input: 695 Output 690,Input: 182 Output: 182
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=(((x%2)!=0)*(x-5))+(((x%2)==0)*x);
    printf("Result is:%d\n",y);
return 0;
}
