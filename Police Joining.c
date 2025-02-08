#include<stdio.h>
int main()
{
    int age,height,weight;
    printf("Enter your age,height,weight:-");
    scanf("%d",&age);
    scanf("%d",&height);
    scanf("%d",&weight);

    if (age>=18&&age<=26)
    {
        if (height>=170)
        {
            if (weight>=60&&weight<=85)
            {
                printf("You passed the exam");
            }
            else
            {
                printf("weight default");
            }
        }
        else
        {
            printf("height defualt");
        }
    }
    else
    {
        printf("age default");
    }
    return 0;
}
