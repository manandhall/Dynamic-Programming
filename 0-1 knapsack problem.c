#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int n,W;
    scanf("%d%d",&n,&W);
    int val[n],wt[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    int arr[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
            arr[i][j]=0;
            else if(wt[i-1]<=j)
            arr[i][j]=max(val[i-1]+arr[i-1][j-wt[i-1]],arr[i-1][j]);
            
            else
            {
                arr[i][j]=arr[i-1][j];
            }
        }
        printf("%d",arr[n][W]);
    }
    return 0;
}