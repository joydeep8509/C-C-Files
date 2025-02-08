#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n,i;

    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter number of elements:-%d\n",n);

    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory not Allocated\n");

        exit (0);
    }
    else
    {
        printf("Memory successfully allocated\n");

        for(i=0;i<n;i++)

            ptr[i]=i+1;
    }
    printf("The elements of the array are:- ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",ptr[i]);
    }
}
