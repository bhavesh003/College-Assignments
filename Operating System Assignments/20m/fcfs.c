#include <stdio.h>

int n, Bu[20], Twt, Ttt, A[10], wt[10], temp;
float Awt, Att;
char pname[20][20], c[20][20];
void getdata();
void calculate();
void gantt_chart();
void fcfs();

void getdata()
{
  int i;
  printf("\nEnter the number of processes:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("Enter the process Name:");
    scanf("%s", pname[i]);
    printf("Enter the Arrival time %s=", pname[i]);
    scanf("%d", &A[i]);
    printf("Enter the Burst time %s=", pname[i]);
    scanf("%d", &Bu[i]);
  }
}
void calculate()
{
  int i;
  wt[1] = 0;
  for (i = 2; i <= n; i++)
  {
    wt[i] = Bu[i - 1] + wt[i - 1];
  }
  for (i = 1; i <= n; i++)
  {
    Twt = Twt + (wt[i] - A[i]);
    Ttt = Ttt + ((wt[i] + Bu[i]) - A[i]); // completion time - arrival time
  }
  printf("    processes\tBT\tAT\tWT\tTat\n");
  for (i = 1; i <= n; i++)
  {
    printf("\t%s\t%d\t%d\t%d\t%d\n", pname[i], Bu[i], A[i], wt[i], (wt[i] + Bu[i]) - A[i]);
  }
  Att = (float)Ttt / n;
  Awt = (float)Twt / n;
  printf("\nAverage Turn around time=%3.2fms \n", Att);
  printf("\nAverage Waiting  time=%3.2fms \n", Awt);
}
void gantt_chart()
{
  int i;
  printf("Gantt chart\n");
  for (i = 1; i <= n; i++)
    printf("  %s |", pname[i]);
  printf("\n|----------------------|\n");
  printf(" ");
  for (i = 1; i <= n; i++)
    printf("%d   ", wt[i]);    // from 0 to nth
  printf("%d", wt[n] + Bu[n]); // for the n+1 th tat
}
void fcfs()
{
  int i, j, temp, temp1;
  Twt = 0;
  Ttt = 0;
  for (i = 1; i <= n; i++)
  {
    for (j = i + 1; j <= n; j++)
    {
      if (A[i] > A[j])
      {
        temp = Bu[i];
        Bu[i] = Bu[j];
        Bu[j] = temp;
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
      }
    }
  }
  calculate();
  gantt_chart();
}
void main()
{
  getdata();
  fcfs();
}
