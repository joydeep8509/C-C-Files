#include<stdio.h>
union info
{
    int roll;
    char name;
    double marks;
};

int main()
{
    union info st;

    printf("student record");
    scanf("%d %c %f",&st.roll,&st.name,&st.marks);
    printf("%d,%c,%f",&st.roll,&st.name,&st.marks);

    return 0;
}
