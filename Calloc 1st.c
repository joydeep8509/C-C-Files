#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* ptr;

    int n, i;

    n = 5;

    printf("Entered number of elements: %d\n", n);

    ptr = (int*)calloc(n, sizeof(int));   //20 bytes

    if (ptr == NULL)
	 {

        printf("Memory not allocated.\n");

        exit(0);

    }

    else
	{


        printf("Memory successfully allocated using calloc.\n");



       for (i = 0; i < n; ++i)
		{

            ptr[i] = i + 1;  //1 2 3 4 5

        }



        printf("The elements of the array are: ");

        for (i = 0; i < n; ++i)
		{

            printf("%d\t ", ptr[i]);

        }

    }


    return 0;
}
