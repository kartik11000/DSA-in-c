# include <stdio.h>
# include<conio.h>
int  marge(int arr[],int low,int high);
void  sort(int arr[],int low,int mid,int high);
void main()
{
    int arr[100],n,i;
    printf("enterr the size of array\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the elements\n");
        scanf("%d",&arr[i]);
    }
    marge(arr,0,n);
    
}

int marge(int arr[],int low ,int high)
{
if(low<high)
{int mid=(low+high)/2;
    marge(arr,low,mid);
    marge(arr,mid+1,high);
    sort(arr,low,mid,high);
}
}
void sort(int arr[],int low,int mid ,int high)
{
    int i,j;
    i=low;
    j=mid+1;
    int k=low;
    int a1[20];
    while(i<=mid && j<=high)
    {
        if(arr[i]<=arr[j])
        {
            a1[k++]=arr[i++];
        }
        else
        {
            a1[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        a1[k++]=arr[i++];
    }
    while(j<=high)
    {
        a1[k++]=arr[j++];
    }
    printf("this is sorted array\n");
    for(i=low;i<=high;i++)
    {
        arr[i]=a1[i];
    
    }
    for(i=low;i<=high;i++)
    {
        printf("%d\n",arr[i]);
    }

}