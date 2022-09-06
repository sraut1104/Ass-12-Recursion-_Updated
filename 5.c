// 5. Write a recursive function to print first N even natural numbers

#include<stdio.h>
void printEven(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("First %d even natural numbers: ",num);
    printEven(num);
    return 0;
}
void printEven(int n)
{
    if(n==0)
        return;
    printEven(n-1);
    printf("%d ",2*n);
}