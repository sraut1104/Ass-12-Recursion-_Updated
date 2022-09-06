// 6. Write a recursive function to print first N even natural numbers in reverse order

void printRevEven(int);
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("First %d even natural numbers in reverse order: ",num);
    printRevEven(num);

    return 0;
}
void printRevEven(int n)
{
    if(n==0)
        return;
    printf("%d ",2*n);
    printRevEven(n-1);
}