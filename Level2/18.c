/*
* Question:Write a program to get number from user, print whether that number’s
first two digits (ten’s digits and one’s digit) is prime.
Answer:Input: 359 - Output: Prime
Input: 3577 - Output: Not Prime
*/
#include <stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    int o=x%10;
    int t=(x%100)/10;
    //2,3,5,7
    if((o==2 || o==3 || o==5 || o==7)&&(t==2 || t==3 || t==5 || t==7)){
        printf("Prime!\n");
    }else{
        printf("!Prime\n");
    }

return 0;
}
