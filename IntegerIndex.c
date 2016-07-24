/**
Integers in an array are unique and increasingly sorted. Write a function/method to find an integer from the array
which equals to its index.
Example:
 Array X : -3 -1 0 3 5 7
 index   :  0  1 2 3 4 5
      Answer is 3 as X[3] = 3.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",aindex(&a,n));
    return 0;
}
int aindex(int *a,int n)
{

    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid= (low + high)/2;
        if(a[mid]- mid ==0)
            return mid;
        else if (a[mid]- mid < 0)
            low= mid + 1;
        else
            high= mid -1;
    }
    return -1;
}
