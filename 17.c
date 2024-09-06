/**
* Question:Get a two-digit number from user and make the one’s digit as 0,
then print it.
Example:Input: 95 Output 90,Input: 18 Output: 10
**/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the two-digit nimber: ");
    scanf("%d",&x);
    y=((x/10)*10);
    //y=(((x/10)*10)+((x%10)*0));
    printf("Result is:%d\n",y);
return 0;
}
