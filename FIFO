 #include<stdio.h>
 int main()
 {
    int i,j,n,a[50],frame[10],no,k,avail,fault=0;
    printf("\nEnter the number of pages:\n");
    scanf("%d",&n);
    printf("enter the page number");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        printf("Enter the number of frames");
        scanf("%d",&no);
    }
     for(i=1;i<=n;i++)
     {
        frame[i]=-1;
        j=0;
        printf("\tinput\tpage frames\n");
     }
      for(i=1;i<=n;i++)
      {
        printf("%d\t\t",a[i]);
        avail=0;
         for(k=1;k<=n;k++)
         if(frame[k]==a[i])
         avail=1;
         if(avail==0)
         {
            frame[j]=a[i];
            fault++;
            for(k=0;k<no;k++)
            {
                printf("%d\t",frame[k]);
            }
            j=(i+1)%no;
            printf("\n");
            printf("page fault is%d",fault);
            return 0;
         }

      }


 }
