#include <stdio.h>

int f[50], i, k, j, inde[50], n, c, count = 0, p;

int main() {
    for (i = 0; i < 50; i++)
        f[i] = 0;
    x:
    printf("Enter index block: ");
    scanf("%d", &p);
    if (f[p] == 0) {
        f[p] = 1;
        printf("Enter the number of files on index: ");
        scanf("%d", &n);
    } else {
        printf("Block already allocated\n");
        goto x;
    }

    for (i = 0; i < n; i++)
        scanf("%d", &inde[i]);
    for (i = 0; i < n; i++)
        if (f[inde[i]] == 1) {
            printf("Block already allocated\n");
            goto x;
        }
    for (j = 0; j < n; j++)
        f[inde[j]] = 1;
    printf("\nAllocated\n");
    printf("File indexed\n");
    for (k = 0; k < n; k++)
        printf("%d->%d:%d\n", p, inde[k], f[inde[k]]);
    printf("Enter 1 to enter more files and 0 to exit: ");
    scanf("%d", &c);
    if (c == 1)
        goto x;
    else
        return 0;
}
/*Enter index block: 9
Enter the number of files on index: 3
1
2
3

Allocated
File indexed
9->1:1
9->2:1
9->3:1
Enter 1 to enter more files and 0 to exit: */
