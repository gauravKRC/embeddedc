/**
* Question:Get a three-digit number from user and make the one’s digit as 2,
then print it.
Example:Input: 695 Output 692,Input: 182 Output: 182
*/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the three-digit number: ");
    scanf("%d",&x);
    y=(((x/100)*100)+(((x%100)/10)*10)+(((x%100)%10)*0)+2);
    printf("Result is:%d\n",y);
return 0;
}
