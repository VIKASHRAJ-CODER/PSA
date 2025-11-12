/*
Write a C program to calculate the simple interest for a given principal amount, rate of interest, and time period.

Instructions:
Prompt the user to enter the principal amount, rate of interest, and time period in years.
Calculate the simple interest using the formula: Simple Interest = (Principal Amount * Rate of Interest * Time) / 100.
*/
#include<stdio.h>
void task6(int si){
    printf("%d",si);
}
int main(){
    int pa,roi,time,si;
    scanf("%d %d %d",&pa,&roi,&time);
    si = (pa * roi * time)/100;
    task6(si);
}