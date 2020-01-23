#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sequence[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&sequence[i]);
    }
    for(int i=0;i<n;i++) //initialize the empty array to zero
    {
        arr[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(sequence[i]>sequence[j]&&arr[i]<arr[j]+1)
            {
                arr[i]=arr[j]+1;
            }
        }
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("%d",max);
    return 0;
}
