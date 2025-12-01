/*
Write a program that takes a temperature in Fahrenheit as input and converts it to Celsius using the formula: 

celsius = (fahrenheit - 32) * 5/9

Declare fahrenheit as int and celsius as float.

int fahrenheit;
float celsius;
*/

#include<stdio.h>
void task5(float cel){
    printf("%f",cel);
}
int main (){
    int fah;
    float cel;
    scanf("%d",&fah);
    cel = ((fah-32)*5.0)/9.0;
    task5(cel);
}