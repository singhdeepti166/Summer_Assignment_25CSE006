//QUESTION NO 108
#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    float eng, maths, science, total, percentage;
};
int main(){
    struct Student s;

    printf("Enter Roll Number:\n ");
    scanf("%d",&s.roll);

    printf("Enter Name:\n ");
    scanf("%s",s.name);

    printf("Enter English Marks:\n ");
    scanf("%f",&s.eng);

    printf("Enter Maths Marks:\n ");
    scanf("%f",&s.maths);

    printf("Enter Science Marks:\n ");
    scanf("%f",&s.science);

    s.total = s.eng + s.maths + s.science;
    s.percentage = s.total / 3;

    printf("\n----- Marksheet -----\n");
    printf("Roll Number : %d\n",s.roll);
    printf("Name        : %s\n",s.name);
    printf("English     : %.2f\n",s.eng);
    printf("Maths       : %.2f\n",s.maths);
    printf("Science     : %.2f\n",s.science);
    printf("Total       : %.2f\n",s.total);
    printf("Percentage  : %.2f%%\n",s.percentage);

    if(s.percentage>=90)
        printf("Grade : A+\n");
    else if(s.percentage>=75)
        printf("Grade : A\n");
    else if(s.percentage>=60)
        printf("Grade : B\n");
    else if(s.percentage>=40)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    return 0;fi

