// 9. Write a recursive function to print octal of a given decimal number

#include<stdio.h>
void DtoO(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Octal of %d: ",num);
    DtoO(num);

    return 0;
}
void DtoO(int n)
{
    if (n/8 == 0)
    {
        printf("%d ",n%8);
        return;
    }
    DtoO(n/8);
    printf("%d ",n%8);
}