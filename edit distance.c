#include <stdio.h>
int min(int a,int b,int c)
{
    if(a<=b&&a<=c)
    {
        return a;
    }
    else if(b<=a&&b<=c)
    {
        return b;
    }
    else
    return c;
}
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    char ch1[m],ch2[n];
    scanf(" %s%s",ch1,ch2);
    int arr[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
            {
                arr[i][j]=j;
            }
            else if(j==0)
            {
                arr[i][j]=i;
            }
            else if(ch1[i-1]==ch2[j-1])
            {
                arr[i][j]=arr[i-1][j-1];
            }
            else
            {
                arr[i][j]=1+min(arr[i-1][j],arr[i][j-1],arr[i-1][j-1]);
            }
        }
    }
    printf("%d",arr[m][n]);
    return 0;
}