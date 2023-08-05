#include <stdio.h>

int main()
{
    int i, j, n, a[50], frame[10], no, k, avail, fault = 0;

    printf("\n Enter the number of pages:\n");
    scanf("%d", &n);

    printf("\n enter the page number:\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    printf("\n enter the number of frames:");
    scanf("%d", &no);

    for (i = 0; i < no; i++)
        frame[i] = -1;

    j = 0;

    printf("\tinput\t page frames\n");
    for (i = 1; i <= n; i++)
    {
        avail = 0;

        for (k = 0; k < no; k++)
        {
            if (frame[k] == a[i])
            {
                avail = 1;
                break;
            }
        }

        if (avail == 0)
        {
            frame[j] = a[i];
            j = (j + 1) % no;
            fault++;
        }

        printf("%d\t\t", a[i]);

        for (k = 0; k < no; k++)
            printf("%d\t", frame[k]);

        printf("\n");
    }

    printf("Page Fault is %d\n", fault);
    return 0;
}
/*Enter the number of pages:
7

 enter the page number:
1
3
0
3
5
6
3

 enter the number of frames:3
        input    page frames
1               1       -1      -1
3               1       3       -1
0               1       3       0
3               1       3       0
5               5       3       0
6               5       6       0
3               5       6       3
Page Fault is 6*/
