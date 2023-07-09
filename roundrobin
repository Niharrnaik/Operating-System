#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
int mutex=1,full=0,empty=3,x=0;
int main()
{
int n;
void producer();
void consumer();
int wait(int);
int signal(int);
printf(&quot;\n1.Producer\n2.Consumer\n3.Exit&quot;);
while(1)
{
printf(&quot;\nEnter your choice:&quot;);
scanf(&quot;%d&quot;,&amp;n);
switch(n)
{
case 1: if((mutex==1)&amp;&amp;(empty!=0))
producer();
else
printf(&quot;Buffer is full!!&quot;);
break;
case 2: if((mutex==1)&amp;&amp;(full!=0))
consumer();
else
printf(&quot;Buffer is empty!!&quot;);
break;
case 3:
exit(0);
break;
}
}
return 0;
}
int wait(int s)
{
return (--s);
}

int signal(int s)
{
return(++s);
}
void producer()
{
mutex=wait(mutex);
full=signal(full);
empty=wait(empty);
x++;
printf(&quot;\nProducer produces the item %d&quot;,x);
mutex=signal(mutex);
}
void consumer()
{
mutex=wait(mutex);
full=wait(full);
empty=signal(empty);
printf(&quot;\nConsumer consumes item %d&quot;,x);
x--;
mutex=signal(mutex);
}
