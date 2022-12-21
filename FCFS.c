#include<stdio.h>
void main()
{
	int i, j, k, at[100], bt[100], tat[100], wt[100], n;
	printf("Enter the no of processes\n");
	scanf("%d",&n);
	printf("All the processes are arrived at 0");
	printf("Enter burst time for the following processes\n");
	for(i=0;i<n;i++)
    {
		printf("P%d",i);
		scanf("%d",&bt[i]);
		printf("\n");
	}
	tat[-1] = 0;
	wt[0] = 0;
	for(i=0;i<n;i++)
	{
		tat[i] = tat[i-1]+bt[i];
		wt[i] = tat[i]-bt[i];
	}
	printf("Processes\t Arrival Time\t Burst Time\t Turnaround Time\t Waiting Time\t\n");
	for(i=0;i<n;i++)
	{
		printf("P%d\t\t",i);
		printf("%d\t\t",at[i]);
		printf("%d\t\t",bt[i]);
		printf("%d\t\t",tat[i]);
		printf("%d\t\t",wt[i]);
		printf("\n");
	}
	float t = 0.0, w = 0.0;
	for(i=0;i<n;i++)
	{
		t = t+tat[i];
		w = w+wt[i];
	}
	float atat = t/n;
	float awt = w/n;
	printf("Average TAT is %f\n",atat);
	printf("Average WT is %f\n",awt);
}
