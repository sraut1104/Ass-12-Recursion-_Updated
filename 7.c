// 7. Write a recursive function to print squares of first N natural numbers

#include<stdio.h>
void printSquareN(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Square of first %d natural numbers: ",num);
    printSquareN(num);

    return 0;
}
void printSquareN(int n)
{
    if(n==0)
        return;
    printSquareN(n-1);
    printf(" %d ",n*n);
}