/*Instructions:
Variables to declare:
char name_letter;
int pincode;
float height;
double latitude, longitude;
Program execution sample:

Enter first letter of your name: M
Enter your Pincode: 560001
Enter your height in feet: 5.8
Enter latitude & longitude of your address: 12.9757   77.6053

Here is what you have entered:
First Letter in Name: M
Pincode: 560001
Height: 5.8 ft
Location: 12.9757   77.6053
Note : Comment the prompting messages 

like printf("enter the number ");*/

#include<stdio.h>
void task1(char name_letter,int pincode, float height, double latitude , double longitude){
    
    printf("Here is what you have entered:\n");
    printf("First Letter in Name: %c\n",name_letter);
    printf("Pincode: %d\n",pincode);
    printf("Height: %f\n",height);
    printf("Location: %lf %lf\n",latitude ,longitude);
    
}
int main(){
    char name_letter;
    int pincode;
    float height;
    double latitude, longitude;
    
    printf("Enter first letter of your name: \n");
    scanf("%c",&name_letter);
    printf("Enter your Pincode: \n");
    scanf("%d",&pincode);
    printf("Enter your height in feet: \n");
    scanf("%f",&height);
    printf("Enter latitude & logitude of your address: \n");
    scanf("%lf %lf",&latitude ,&longitude);
        
    task1(name_letter,pincode,height,latitude,longitude);
}
