/*
you should read three intergers from user and find the middle number 

Sample Execution : 

Test case 1 : 

Enter the Three numbers : 10 20 30

The middle number is 20

Test case 2 :


Enter the Three numbers : 43 10 25

The middle number is 25

*/
#include<stdio.h>
void a1(int n){
    printf("The middle number is %d",n);
}
int main(){
    int a, b, c, n;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b && b>c)||(c>b && b>a)){
        n=b;
    }else if((b>a&&a>c)||(c>a&&a>b)){
        n=a;
    }else{
        n=c;
    }
    a1(n);
}