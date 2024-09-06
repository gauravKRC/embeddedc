/**
* Question:Get a three-digit number from user and make the ten’s digit as 0,
then print it.
Example:Input: 695 Output 605,Input: 182 Output: 102
**/
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the three-digit number: ");
    scanf("%d",&x);
    y=(((x/100)*100)+(((x%100)/10)*0)+(((x%100)%10)*1));
    printf("Result is:%d\n",y);
return 0;
}
