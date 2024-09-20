/*
Question:
Write a program to get two numbers from user and print the HCF of
those numbers.*/
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the numbers: ");
    scanf("%d", &x);
    printf("Enter the number: ");
    scanf("%d", &y);
    int n1 = x;
    int n2 = y;
    if (x >= y)
    {
        int c = 1;
        while (c != 0)
        {
            int r = n1 % n2;
            n1 = n2;
            n2 = r;
            c = r;
        }
        printf("HCF:%d\n", n1);
    }
    else
    {
        int c = 1;
        while (c != 0)
        {
            int r = n2 % n1;
            n2 = n1;
            n1 = r;
            c = r;
        }
        printf("HCF:%d\n", n2);
    }
}