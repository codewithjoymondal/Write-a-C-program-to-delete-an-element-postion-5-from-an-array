//This Code Written By Joy Mondal. Son Don,t Copy Any one.
//My github : https://github.com/codewithjoymondal

#include<stdio.h>
int main()
{
    int arr[8];
    int joy;
    printf("Enter Five Value : ");
    for(joy=0;joy<8;joy++)
    {
        scanf("%d",&arr[joy]);
    }

    for(joy=4;joy<8;joy++)
    {
        arr[joy]=arr[joy+1];
    }
    for(joy=0;joy<7;joy++)
    {
        printf("%d ",arr[joy]);
    }
    return 0;
}