#include <stdio.h>
void towers(int, char, char, char);
int main()
{
    int num;
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char from, char top, char aux)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", from, top);
     	  return;
    }
    towers(num - 1, from, aux, top);
    printf("\n Move disk %d from peg %c to peg %c", num, from, top);
    towers(num - 1, aux, top, from);
}
