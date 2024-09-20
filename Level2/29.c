/*
* Question:
Write a program to get three numbers from user and print the LCM of
those numbers.
*/
#include <stdio.h>

//prototypes
int find_lcm(int,int,int);
int max(int,int);

int main(){
    int x,y,z;
    printf("Enter the numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    int lcm=find_lcm(x,y,z);
    printf("LCM:%d\n",lcm);
return 0;
}

int find_lcm(int a,int b,int c){
    int k=max(a,max(b,c));

    while(k%a!=0 || k%b!=0 || k%c!=0){
            k++;
            }
return k;
}

int max(int m,int n){
    return m > n ? m : n;
}
