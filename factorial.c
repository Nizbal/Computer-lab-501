#include<stdio.h>

int fact(int n)
{
    if(n<=1)
        return n;
        
    int ans = n * fact(n-1);
    return ans;
}

int main()
{
    printf("Enter a no.\n");
    int n;
    scanf("%d",&n);
    printf("Factorial = %d",fact(n));
    return 0;
}
