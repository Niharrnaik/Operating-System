#include&lt;stdio.h&gt;
int main()
{
char pn[10];
int
arr[10],bur[10],star[10],finish[10],tat[1
0],wt[10],i,n;
int totwt=0,tottat=0;
printf(&quot;Enter the number of
processes:&quot;);
scanf(&quot;%d&quot;,&amp;n);
for(i=0;i&lt;n;i++)
{
printf(&quot;Enter the Process Name, Arrival
Time &amp; Burst Time:&quot;);

scanf(&quot;%s%d%d&quot;,&amp;pn[i],&amp;arr[i],&amp;bur[i])
;
}
for(i=0;i&lt;n;i++)
{
if(i==0)
{
star[i]=arr[i];
wt[i]=star[i]-arr[i];
finish[i]=star[i]+bur[i];
tat[i]=finish[i]-arr[i];
}
else
{
star[i]=finish[i-1];

wt[i]=star[i]-arr[i];
finish[i]=star[i]+bur[i];
tat[i]=finish[i]-arr[i];
}
}
printf(&quot;\nPName Arrtime Burtime Start
TAT Finish&quot;);
for(i=0;i&lt;n;i++)
{
printf(&quot;\n%s\t%6d\t\t%6d\t%6d\t%6d\
t%6d&quot;,pn[i],arr[i],bur[i],star[i],tat[i],fini
sh[i]);
totwt+=wt[i];
tottat+=tat[i];
}

printf(&quot;\nAverage Waiting time:%f&quot;,
(float)totwt/n);
printf(&quot;\nAverage Turn Around
Time:%f&quot;, (float)tottat/n);
}

SOURCE CODE:
/* A program to simulate the SJF CPU
scheduling algorithm */
#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
main()
{

Int
i=0,pno[10],bt[10],n,wt[10],temp=0,j,tt
[10];
float sum,at;
printf(&quot;\n Enter the no of process &quot;);
scanf(&quot; %d&quot;,&amp;n);
printf(&quot;\n Enter the burst time of each
process&quot;);
for(i=0;i&lt;n;i++)
{
printf(&quot;\n p%d&quot;,i);
scanf(&quot;%d&quot;,&amp;bt[i]);
}
for(i=0;i&lt;n-1;i++)
{
for(j=i+1;j&lt;n;j++)

{
if(bt[i]&gt;bt[j])
{
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
temp=pno[i];
pno[i]=pno[j];
pno[j]=temp;
}
}
}
wt[0]=0;
for(i=1;i&lt;n;i++)
{

wt[i]=bt[i-1]+wt[i-1];
sum=sum+wt[i];
}
printf(&quot;\n process no \t burst time\t
waiting time \t turn around time\n&quot;);
for(i=0;i&lt;n;i++)
{
tt[i]=bt[i]+wt[i];
at+=tt[i];
printf(&quot;\n
p%d\t\t%d\t\t%d\t\t%d&quot;,i,bt[i],wt[i],tt[
i]);
}
printf(&quot;\n\n\t Average waiting
time%f\n\t Average turn around
time%f&quot;, sum/n,at/n);

}
