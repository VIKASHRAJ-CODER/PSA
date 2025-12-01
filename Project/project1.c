/*
Student Marks Analyzer 
Input:
    n students
    Each student's 5 sub marks
Output:
    Total
    Percentage
    Highest marks 
    Lowest marks
    class average    
    
*/
#include<stdio.h>
int main(){
    int n,n1,n2,n3,n4,n5;
    printf("Enter the number student:\n");
    scanf("%d",&n);
    int total,grade,hm,lm,ca;
    float per;
    int sum = 0;
    for(int i=0;i<n;i++){
        printf("Enter the 5 different sub marks:\n");
        scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
        total = n1+n2+n3+n4+n5;
        printf("Total: %d\n",total);
        per = (total/5);
        printf("Percentage: %g%%\n",per);
        if(n1>n2 && n1>n3 && n1>n4 && n1>n5){
            hm=n1;
        }else if(n2>n1 && n2>n3 && n2>n4 && n2>n5){
            hm=n2;
        }else if(n3>n1 && n3>n2 && n3>n4 && n3>n5){
            hm=n3;
        }else if(n4>n1 && n4>n3 && n4>n3 && n4>n5){
            hm=n4;
        }else hm =n5;
        
        if(n1<n2 && n1<n3 && n1<n4 && n1<n5){
            lm=n1;
        }else if(n2<n1 && n2<n3 && n2<n4 && n2<n5){
            lm=n2;
        }else if(n3<n1 && n3<n2 && n3<n4 && n3<n5){
            lm=n3;
        }else if(n4<n1 && n4<n3 && n4<n3 && n4<n5){
            lm=n4;
        }else lm =n5;
        printf("Highest Marks: %d \n",hm);
        printf("Lowest Marks: %d \n",lm);
        sum = sum+total;
    }
    float av = sum/(5*n);
    printf("Average per sub: %g\n",av);
    float avg = sum/n;
    printf("Average per student: %g\n",avg);
}