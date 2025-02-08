#include <stdio.h>

int main()
{
   int *pc, c;
   int **d;

   c = 22;
  printf("Address of c: %d\n", &c);    //addres of c
  printf("Value of c: %d\n\n", c);  // 22   value of c

   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22

   c = 11;
   printf("Address of pointer pc: %d\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11

   *pc = 2;
   printf("Address of c: %p\n", &c);//&c=pc
   printf("Value of c: %d\n\n", c); // 2  c=*pc

   d=&pc;
     printf("Address of pointer pc: %p\n", d);   // pc address
     printf("Content of pointer pc: %d\n\n", *d); // c address
  	 printf("Content of pointer pc: %d\n\n", **d);// c value

   return 0;
}
