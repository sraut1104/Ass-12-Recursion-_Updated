// 8. Write a recursive function to print binary of a given decimal number

#include<stdio.h>
void DtoB(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Binary of %d: ",num);
    DtoB(num);

    return 0;
}
void DtoB(int n)
{
    if (n/2 == 0)
    {
        printf("%d ",n%2);
        return;
    }
    DtoB(n/2);
    printf("%d ",n%2);
}