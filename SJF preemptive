#include&lt;stdio.h&gt;
int main()
{

int burst_time[20],p[20],waiting_time[20],tat[20],i,j,n,total=0,pos,temp;
float avg_waiting_time,avg_tat;
printf(&quot;please enter number of process: &quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;\n enter the Burst Time:\n&quot;);
for(i=0;i&lt;n;i++)
{
printf(&quot;p%d:&quot;,i+1);
scanf(&quot;%d&quot;,&amp;burst_time[i]);
p[i]=i+1;
}
// from here, burst times sorted
for(i=0;i&lt;n;i++)
{
pos=i;
for(j=i+1;j&lt;n;j++)
{
if(burst_time[j]&lt;burst_time[pos])
pos=j;
}
temp=burst_time[i];
burst_time[i]=burst_time[pos];
burst_time[pos]=temp;
temp=p[i];
p[i]=p[pos];
p[pos]=temp;
}

waiting_time[0]=0;
for(i=1;i&lt;n;i++)
{
waiting_time[i]=0;
for(j=0;j&lt;i;j++)
waiting_time[i]+=burst_time[j];
total+=waiting_time[i];
}
avg_waiting_time=(float)total/n;
total=0;
printf(&quot;\nProcess\t Burst Time \tWaiting Time\tTurnaround Time&quot;);
for(i=0;i&lt;n;i++)
{
tat[i]=burst_time[i]+waiting_time[i];
total+=tat[i];
printf(&quot;\np%d\t\t %d\t\t %d\t\t\t%d&quot;,p[i],burst_time[i],waiting_time[i],tat[i]);
}
avg_tat=(float)total/n;
printf(&quot;\n\n the average Waiting Time=%f&quot;,avg_waiting_time);
printf(&quot;\n the average Turnaround Time=%f\n&quot;,avg_tat);
}
