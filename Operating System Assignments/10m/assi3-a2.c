#include <stdio.h>
int main()
{
   int alloc[10][10], max[10][10], need[10][10];
   int p, r, i, j;

   printf("Enter Process & Resources: ");
   scanf("%d %d", &p, &r);

   printf("enter Max Matrix: ");
   for (i = 0; i < p; i++)
   {
      for (j = 0; j < r; j++)
      {
         scanf("%d", &max[i][j]);
      }
   }

   printf("enter Alloc Matrix: ");
   for (i = 0; i < p; i++)
   {
      for (j = 0; j < r; j++)
      {
         scanf("%d", &alloc[i][j]);
      }
   }

   printf("Max Matrix\n");
   for (i = 0; i < p; i++)
   {
      for (j = 0; j < r; j++)
      {
         printf("%d\t", max[i][j]);
      }
      printf("\n");
   }

   printf("Alloc Matrix\n");
   for (i = 0; i < p; i++)
   {
      for (j = 0; j < r; j++)
      {
         need[i][j] = max[i][j] - alloc[i][j];
         printf("%d\t", need[i][j]);
      }
      printf("\n");
   }

   printf("Alloc Matrix\n");
   for (i = 0; i < p; i++)
   {
      for (j = 0; j < r; j++)
      {
         printf("%d\t", alloc[i][j]);
      }
      printf("\n");
   }

   return 0;
}