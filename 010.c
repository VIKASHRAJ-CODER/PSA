/*
WAP to check whether number is between 50 to 100

Instructions:
Use if else condition and logical operator

Program execution sample:

Sample Output 1:
Enter a number: 60
60 is in range
Sample Output 2:
Enter number: 5
5 is not in range
Sample Output 3:
Enter a number: 50
50 is in range
Sample Output 4:
Enter a number: 200
200 is not in range
Sample Output 5:
Enter a number: 100
100 is in range
*/
#include<stdio.h>
void task10(int n){
    if(n>50 && n<=100){
        printf("%d is in range\n",n);
    }else{
        printf("%d is not in range\n",n);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    task10(n);
}