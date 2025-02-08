#include<stdio.h>

union info
{
    int roll;
    char name[20];
    int marks;
};
int main()
{
    union info st;

    printf("Enter your record\n");
    scanf("%d",&st.roll);
    printf("%d\n",st.roll);

    scanf("%s",&st.name);
    printf("%s\n",st.name);

    scanf("%d",&st.marks);
    printf("%d\n",st.marks);

    return 0;
}
