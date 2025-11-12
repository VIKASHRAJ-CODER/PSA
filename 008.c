/*
WAP to check whether a number is positive or negative

Instructions:
Use if else condition to check

Program execution sample:

Sample Output 1:
Enter a number: 5
5 is positive
Sample Output 2:
Enter a number: -23
-23 is negative
*/
#include<stdio.h>
void task8(int n){
    if(n>=0){
        printf("%d is positive",n);
    }else{
        printf("%d is negative",n);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    task8(n);

}