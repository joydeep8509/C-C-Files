#include<stdio.h>
#include<string.h>

struct myStructure
{
  int myNum;
  char myLetter;
  double value;
  char num[6];//string
};

int main()
 {

  struct myStructure s1;// Create a structure variable of myStructure called s1

  s1.myNum = 13;	// Assign values to members of s1
  s1.myLetter = 'B';
  s1.value=145.56;
	gets(s1.num);

	double p=s1.myNum+s1.value; //imp.type casting..

  	printf("My number: %d\n", s1.myNum);
  	printf("My letter: %c\n", s1.myLetter);
 	printf("My value: %f\n", s1.value);
	puts(s1.num);


	printf("The sum : %f",p);

  return 0;
}
