/*
WAP to find sum of 2 integers.
Program should read two integers from user and print the sum.

Sample executions :
Input    : 7 1
Output : sum=8
*/
#include<stdio.h>
void task2(int sum){
    printf("sum=%d\n",sum);
}
int main(){
    int n,m,sum;
    scanf("%d",&n);
    scanf("%d",&m);
    sum = n+m;
    task2(sum);
}