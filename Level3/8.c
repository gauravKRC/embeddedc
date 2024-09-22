/*
* Question:*****************************************
Get a number from user and check whether the digits are in
ascending order.
Example:Input: 1234 Output: Yes. Input: 5687 Output: No
*/
#include <stdio.h>
int check_ascending(int no);
int main(){
    int number,result;
    printf("Enter at least two digits number: ");
    scanf("%d",&number);
    result=check_ascending(number);
    if(result==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
return 0;
}
int check_ascending(int no){
    int result;
    int cd,pd;
    pd=no%10;
    int n=no/10;
    if(n==0){
        result=1;
    }
    while(n!=0){
       int d=n%10;
        cd=d;
        if(cd<=pd){
           result=1;
        }else{
           result=0;
            n=0;
        }
        pd=d;
        n/=10;
    }
 return result;
}
