#include <stdio.h>

void ToW(int n, char src, char dest, char aux)
{
    if (n == 0)
    {
        return;
    }

    ToW(n - 1, src, aux, dest);
    printf("Move disk %d from rod %c to rod %c\n", n, src, dest);
    ToW(n - 1, aux, dest, src);
}

int main()
{
    int n;
    printf("Enter no. of disks: ");
    scanf("%d", &n);

    char src = 'A';
    char dest = 'C';
    char aux = 'B';

    ToW(n, src, dest, aux);
}