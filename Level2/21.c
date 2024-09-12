/*
* Question:Write a program get number from user print the total number digits
which are odd in the number.
Answer:Input : 12345678 - Output : 4
Input : 987531 - Output : 5
*/
#include <stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
   int c=0;
loop:if(x!=0){
        int n=x%10;
        if(n%2!=0){
            c++;
        }
        x /=10;
        goto loop;
    }
    printf("#digits which are odd:%d\n",c);
return 0;
}
