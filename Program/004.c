/*
Write a program that takes a temperature in Fahrenheit as input and converts it to Celsius using the formula: 

celsius = (fahrenheit - 32) * 5/9

Note : Comment the prompting messages 

like printf("enter the number ");
*/

#include<stdio.h>
void task4(float cel){
    printf("%f",cel);
}
int main(){
    float fah;
    float cel;
    scanf("%f",&fah);
    cel = (fah - 32)*5/9;
    task4(cel);
}