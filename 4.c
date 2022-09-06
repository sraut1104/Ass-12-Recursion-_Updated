// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>
void printOddN(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("First %d odd natural numbers in reverse order: ",num);
    printOddN(num);
    
    return 0;
}
void printOddN(int n)
{

    if(n==0)
        return;
    printf("%d ",2*n-1);
    printOddN(n-1);
    
    
}