/**
 * Question:Get a three-digit number from user and print the reverse of the number.
Example:Input: 561 Output 165,Input: 859 Output: 958
*/
#include <stdio.h>
int main(){
	int x,y;
	printf("Enter the three-digit number: ");
	scanf("%d",&x);
	y=((((x%100)%10)*100)+(((x%100)/10)*10)+(x/100));
	printf("Result is:%d\n",y);
return 0;
}
