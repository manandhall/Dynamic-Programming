#include <stdio.h>
int max(int x,int y)
{
    if(x>=y)
    return x;
    else
    return y;
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    char seq1[n1],seq2[n2];
    for(int i=0;i<n1;i++)
    {
        scanf(" %c",&seq1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        scanf(" %c",&seq2[i]);
    }
    int arr[n1+1][n2+1];
    for(int i=0;i<=n1;i++)
    {
        for(int j=0;j<=n2;j++)
        {
            if(i==0||j==0)
            arr[i][j]=0;
            else if(seq1[i-1]==seq2[j-1])
            {
                arr[i][j]=arr[i-1][j-1]+1;
            }
            else
            arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
        }
    }
    printf("%d",arr[n1][n2]);
    return 0;
}
