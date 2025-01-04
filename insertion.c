# include <stdio.h>
# include<conio.h>
# include <stdlib.h>
void insertion(int arr[],int b);
void main()
{
    int arr[100],b,c,d;
    printf("enter the size of array\n");
    scanf("%d",&b);
    for(c=1;c<=b;c++)
    {
        printf("enter the  element\n");
        scanf("%d",&arr[c]);
    }
    insertion(arr,b);
}

void insertion(int arr[],int b)
{
    int temp,i,j,c;
    for(i=1;i<=b-1;i++)
    {
        for(j=i+1;j>1;j--)
        {
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
          printf("this is sorted array\n");
    for(c=1;c<=b;c++)
    {
        printf("%d\n",arr[c]);
    }
}
    

