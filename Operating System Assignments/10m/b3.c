#include <stdio.h>
#include <time.h>

void main()
{
   clock_t start, end;
   char name;
   start = clock();
   
   printf("Timer starts\n");
   
   printf("enter your name\n");
   scanf("%c\n", &name);
   
   printf("Timer ends \n");

   end = clock();
   double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
   
   printf("The program took %f time to execute\n", time_taken);
}
