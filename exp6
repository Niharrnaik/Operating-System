#include<stdio.h>
typedef struct{
    int processid;
    int bursttime;
    int priority;
}process;
void fcfs(process processes[],int n)
{
    int waitingtime=0;
    float totalwaitingtime=0;
    float averagewaitingtime;
    printf("\nFCFS scheduling algorithm:\n");
    for(int i=0;i<n;i++)
    {
        printf("\n process %d is running.\n",processes[i].processid);
        waitingtime+=processes[i].bursttime;
        printf("process %d is finished.Waiting time is %d\n",processes[i].processid,waitingtime);
        totalwaitingtime+=waitingtime;

    }
    averagewaitingtime=totalwaitingtime/n;
    printf("Average Waiting time is:%.2f\n",averagewaitingtime);
}
void sjn(process processes[],int n)
{
    int totaltime=0;
    int waitingtime=0;
    float averagewaitingtime;
    float totalwaitingtime=0;
    printf("SJN Scheduling Algorithm:\n");
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
        if(processes[j].bursttime>processes[j+1].bursttime)
        {
            process temp=processes[j];
            processes[j]=processes[j+1];
            processes[j+1]= process temp;
        }
      }
    }
    for(int i=0;i<n;i++)
    {
         printf("\n process %d is running.\n",processes[i].processid);
        waitingtime+=totaltime;
        totaltime+=processes[i].bursttime;
        printf("process %d is finished.Waiting time is %d\n",processes[i].processid,waitingtime);
        totalwaitingtime+=waitingtime;

    }
     averagewaitingtime=totalwaitingtime/n;
    printf("Average Waiting time is:%.2f\n",averagewaitingtime);
}
void priorityscheduling(process processes[],int n)
{
    int waitingtime=0;
    float totalwaitingtime=0;
    float averagewaitingtime;
    printf("Priority Scheduling Algorithm:\n");
      for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
        if(processes[j].priority>processes[j+1].priority)
        {
            process temp=processes[j];
            processes[j]=processes[j+1];
            processes[j+1]= process temp;
        }
      }

    }

     for(int i=0;i<n;i++)
    {
         printf("\n process %d is running.\n",processes[i].processid);
        waitingtime+=processes[i].bursttime;
        printf("process %d is finished.Waiting time is %d\n",processes[i].processid,waitingtime);
        totalwaitingtime+=waitingtime;

    }
     averagewaitingtime=totalwaitingtime/n;
    printf("Average Waiting time is:%.2f\n",averagewaitingtime);

} 
int main()
{
    int n;
    printf("Enter the number of processes\n");
    scanf("%d",&n);
    process processes[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the process details for process %d\n",i+1);
        processes[i].processid=i+1;
        printf("Enter the burst time:\n");
        scanf("%d",&processes[i].bursttime);
    printf("Enter the priority:");
    scanf("%d",&processes[i].priority);
}
fcfs(processes,n);
sjn(processes,n);
priorityscheduling(processes,n);
return 0;
}  
