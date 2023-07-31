#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100] ,i,j,n,TotalHeadMoment=0,initial,size,move;
printf("enter the requests sequence\n");
for(i=0;i<n;i++)
scanf("%d",RQ[i]);
printf("enter initial head position \n");
scanf("%d",&initial);
printf("enter total disk size\n");
scanf("%d",&size);
printf("enter the head movement direction for high 1 and for low 0\n");
scanf("%d,&move");
for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if(RQ[j]>RQ[j+1])
        {
            int temp;
            temp=RQ[j];
            RQ[j]=RQ[j+1];
            RQ[j+1]=temp;
    }
}
}
int index;
for(i=0;i<n;i++)
{
    if(initial<RQ[i])
    {
        index=i;
        break;
    }
    }
    if(move==1)
    {
        printf("sequequence of request access:\n");
        for(i=index;i<n;i++)
        {
            printf("%d",RQ[i]);
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=size-1;
            for(i=index-1;i>=0;i--)
            {
                printf("%d",RQ[i]);
                TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
                initial=RQ[i];
            }
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]=initial);
            initial=RQ[i];
        }
    }
            }
       
