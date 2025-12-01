/*
WAP to check whether number is even or odd

Instructions:
Use if else condition

Program execution sample:

Sample Output 1:
Enter a number: 5
5 is odd
Sample Output 2:
Enter a number: 10
10 is even
*/
#include<stdio.h>
void task9(int n){
    if(n%2==0){
        printf("%d is even\n",n);
    }else{
        printf("%d is odd\n",n);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    task9(n);
}