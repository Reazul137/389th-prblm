#include<stdio.h>
int main()
{
    int a[10], i, item;

    printf("\n Enter seven element of an array : ");
    for (i=0; i<=6; i++)
        scanf("%d", &a[i]);

    printf("\n Enter item to search : ");
    scanf("%d",&item);

    for (i=0; i<=9; i++)
        if(item == a[i])
    {
        printf("\n Item found at location %d",i+1);
        break;
    }
    if (i>9)
        printf("\n Item does not exist.");

    return 0;
}
