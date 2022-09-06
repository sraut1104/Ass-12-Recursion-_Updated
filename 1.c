// 1. Write a recursive function to print first N natural numbers

#include<stdio.h>
void printN(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("First %d natural numbers: ",num);
    printN(num);
    
    return 0;
}
void printN(int n)
{
    if(n==0)
        return;
    printN(n-1);
    printf("%d ",n);
    
}