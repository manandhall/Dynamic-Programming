#include <stdio.h>
int arr[100];
void initialize() //initialize the lookup array to -1
{
    for(int i=0;i<100;i++)
    {
        arr[i]=-1;
    }
}
int fib(int n)  //fib function to calculate the nth term of the fibonacci series
{
    if(arr[n]==-1)
    {
        if(n<=1)
        arr[n]=n;
        else
        arr[n]=fib(n-1)+fib(n-2);
    }
    return arr[n];
}
int main()
{
    int n;
    scanf("%d",&n);
    initialize();
    int x=fib(n);
    printf("%d",x);
    return 0;
}
