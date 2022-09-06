// 2. Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>
void printRevN(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("First %d natural numbers in reverse order: ",num);
    printRevN(num);
    

    return 0;
}
void printRevN(int n)
{
    if(n==0)
        return;
    printf(" %d ",n);
    printRevN(n-1);
    
}