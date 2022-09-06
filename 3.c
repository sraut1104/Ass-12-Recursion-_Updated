// 3. Write a recursive function to print first N odd natural numbers

#include<stdio.h>
void printOddN(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("First %d odd natural numbers: ",num);
    printOddN(num);
    

    return 0;
}
void printOddN(int n)
{

    if(n==0)
        return;
    printOddN(n-1);
    printf("%d ",2*n-1);
    
}