/*
WAP to Find average of 3 float values
Program should read 3 float values from user and print their average.

Sample executions :
Test case 1:
Input : 25.7 1.1 28.2
Output : 18.333333
*/
#include<stdio.h>
void task3(float avg){
    printf("%f",avg);
}
int main(){
    float a,b,c,avg;
    scanf("%f %f %f",&a,&b,&c);
    avg = (a+b+c)/3;
    task3(avg);
}