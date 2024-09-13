// Question:Write a program to get two numbers from user and print the LCM of
//those numbers.
#include <stdio.h>
#include <math.h>

int main(){
    int x;
    int y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    int p=2;
    int c1=0;
    int c2=0;
    int i=0;
    int n1=x;
    int n2=y;
    int s1,v1;
      s1=0;
      v1=0;
    int s2,v2;
      s2=0;
      v2=0;

    //debugging
int flag1=1;   //1 or 2
int flag2=3;   //3 or 4
int accum=1;

    int check;

while(check!=1){
  // printf("accum:%d\n",accum);
    if(n1%p==0){
        n1=n1/p;
        c1++;
            flag1=2;
            printf("flag1:%d %d %d\n",flag1,p,n1);
    }else{
        s1=(int)pow(p,c1);
        v1=p;
           while(n2%p==0){
                 n2=n2/p;
                 c2++;
                flag2=4;
            printf("flag2:%d %d %d\n",flag2,p,n2);
            }
        s2=(int)pow(p,c2);
        v2=p;
       p++;
         if((c1!=0) && (c2!=0)){
            if(s1>=s2){
               accum=accum*s1;
                  s1=0;
                  v1=0;
                  s2=0;
                  v2=0;
             printf("if:!c1 & !c2\n");
            }else{
                accum=accum*s2;
                  s1=0;
                  v1=0;
                  s2=0;
                  v2=0;
             printf("else:!c1 & !c2\n");
            }
        }else if((c1==0) && (c2!=0)){
                accum=accum*s2;
                  s1=0;
                  v1=0;
                  s2=0;
                  v2=0;
             printf("c1 & !c2\n");
        }else if((c1!=0) && (c2==0)){
                accum=accum*s1;
                  s1=0;
                  v1=0;
                  s2=0;
                  v2=0;
             printf("!c1 & c2\n");
       }else if(c1==0 && c2==0){

                  s1=0;
                  v1=0;
                  s2=0;
                  v2=0;
            }
            c1=0;
            c2=0;

            check=n1*n2;
    }
}
    printf("LCM=%d\n",accum);
return 0;
}
