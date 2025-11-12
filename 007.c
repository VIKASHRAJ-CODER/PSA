/*
WAP to print largest of 2 integers

Instructions:
Use if else condition to find largest of two integers.
In this program store the largest value in a variable in the if else block. Don't print the value inside the block.
Print the stored largest value after the if else block

Note: Declare variables int num1, num2, largest;

Program execution sample:

Sample Output 1:
Enter two numbers: 5  10
Largest is 10
Sample Output 2:
Enter two numbers: 125  1
Largest is 125
*/

#include<stdio.h>
void task7(int largest){
    printf("%d",largest);
}
int main(){
    int num1,num2,largest;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        largest = num1;
    }else{
        largest = num2;
    }
    task7(largest);
}