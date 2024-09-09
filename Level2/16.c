/*
* Question:Write a program get number from user print whether that number is
prime or not.
Answer:Input : 31 - Output : Prime
Input : 27 - Output : Not Prime.
*/
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the numebr: ");
    scanf("%d", &x);
    int i = 2;
loop:
    if (i < x)
    {
        int z = x % i;
        if (z == 0)
        {
            printf("not prime!\n");
            i = x;
        }
        if(i==x-1){
            printf("Prime\n");
        }
        i++;
        goto loop;
    }
return 0;
}
