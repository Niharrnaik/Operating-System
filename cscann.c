#include<stdio.h>
#include<stdlib.h>

int main(){
    int RQ[100],i,j,n,TotalHeadMoment=0,initial,size,move;
    printf("Enter the number of requestes: \n");
    scanf("%d",&n);
    printf("Enter request Sequence\n");
    for(i=0;i<n;i++)
    scanf("%d",&RQ[i]);
    printf("Enter intial head position\n");
    scanf("%d",&initial);
    printf("Enter total disk size\n");
    scanf("%d",&size);
    printf("Enter the head movement direction for high 1 and low 0\n");
    scanf("%d",&move); 

    for(i=0;i<n;i++){
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
    for(i=0;i<n;i++){
        if(initial<RQ[i]){
            index=i;
            break;
        }
    }
    if (move==1){
        printf("Sequence of request access: \n");
        for(i=index;i<n;i++){
            printf("%d",RQ[i]);
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
        TotalHeadMoment=TotalHeadMoment+abs(size-RQ[i-1]-1);
        TotalHeadMoment=TotalHeadMoment+abs(size-1-0);
        initial=0;
        for(i=0;i<index;i++){
            printf("%d",RQ[i]);
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
    }
    else{
        printf("Sequence of request access: \n");
        for(i=index-1;i>=0;i--)
        {
            printf("%d",RQ[i]);
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i+1]-0);
        TotalHeadMoment=TotalHeadMoment+abs(size-1-0);
        initial=size-1;
        for(i=n-1;i>=index;i--){
            printf("%d",RQ[i]);
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
    }
    printf("\nTotal head movement is %d",TotalHeadMoment);
    return 0;
}

/*

OUTPUT:
Enter the number of requestes: 
7
Enter request Sequence
82
170
43
140
24
16
190
Enter intial head position
50
Enter total disk size
200
Enter the head movement direction for high 1 and low 0
1
Sequence of request access: 
82140170190162443
Total head movement is 391

*/
