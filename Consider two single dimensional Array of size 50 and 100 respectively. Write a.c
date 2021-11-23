//This Code Written By Joy Mondal. Son Don,t Copy Any one.
//My github : https://github.com/codewithjoymondal

#include<stdio.h>
int main()
{
    //and arr2 with size 100
    int arr1[50];
    int arr2[100];


    int size1;
    int size2;

    int joy1,joy2;

    int temp;
    int count;

    printf("Enter the number of elements For frist array : ");
    scanf("%d",&size1);

    printf("First Array: ");

    for(joy1=0;joy1<size1;joy1++)
    {

        scanf("%d",&arr1[joy1]);
    }


    printf("Enter the number of elements  second array : ");
    scanf("%d",&size2);

    printf("Second Array: ");

    for(joy1=0;joy1<size2;joy1++)
    {

        scanf("%d",&arr2[joy1]);
    }


    printf("\n Common Elements: ");

    for(joy1=0;joy1<size1;joy1++)
    {
        temp = arr1[joy1];
        count = 0;
        for(joy2=0;joy2<size2;joy2++)
        {
            if(temp == arr2[joy2] &&(count == 0))
            {
                printf("%d ",temp);
                count = 1;
            }
        }
    }

    return 0;
}