#include <stdio.h>

int ToW(int n, char src, char dest, char aux, int count)
{
    if (n == 0)
    {
        return count;
    }

    count = ToW(n - 1, src, aux, dest, count);
    printf("Move disk %d from rod %c to rod %c\n", n, src, dest);
    count++;
    count = ToW(n - 1, aux, dest, src, count);
}

int main()
{
    int n;
    printf("Enter no. of disks: ");
    scanf("%d", &n);

    char src = 'A';
    char dest = 'C';
    char aux = 'B';

    int count = 0;
    count = ToW(n, src, dest, aux, count);

    printf("Total Movements: %d", count);
}