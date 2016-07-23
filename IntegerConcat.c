/* Given an array of integers, device an algorithm to find the largest number possible from a concatenation of the integers in the array.Each number must be used exactly once.
example 1:
An input array [1,3,2,4]
returns : 4,321
order od #'s: [4,3,2,1]

example 2:
[54,5,55,6,7,56,120,560,540,505,9,57,0,1,45,65]
returns : 976,655,756,560,555,545,405,054,512,010
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100000],b[10000];
    int c[10000];
    int n,num=0,i,j,index=0,index1=0,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=9;j>=0;j--)
    {
      //  printf("\n");
            for(i=0;i<n;i++)
            {

                temp=a[i];
        //        printf("%d ",temp);
                while(temp>9)
                {
                    temp=temp/10;
                }
          //      printf("%d ",temp);
                if(temp==j)
                {
                    //push(index++,a[i],&c);
                      b[index++]=a[i];
            //        printf("true");
                }

            }
    }
    for(i=index;i>=0;i--)
    {
        //printf("%d ",b[i]);
        if(b[i]>9)
        {
            num=b[i];
            while(num>0)
            {
                c[index1++]=num%10;
                num=num/10;
            }
        }
        else
        {

            c[index1++]=b[i];
        }
    }temp=1;
    for(i=index1;i>0;i--)
    {
        if(temp%3==0)
            printf(",");
        printf("%d ",c[i]);
        temp+=1;
    }


    return 0;
}
