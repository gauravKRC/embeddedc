/**
* Question:Get a number from user and subtract 5 from that number if the number’s
ten’s position digit is odd, then print the result. Do not use “if”.
Example:Input: 685 Output 685,Input: 89172 Output: 89167
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=(((x%100)/10)%2!=0)*(x-5)+((((x%100)/10)%2==0)*x);
    printf("Result is:%d\n",y);
return 0;
}


