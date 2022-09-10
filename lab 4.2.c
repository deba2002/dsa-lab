/*1. 2. Given an array of integers. All numbers occur twice except one number which occurs
once. Write down the algorithm to find the number in O(n) time & constant extra space.
Input: ar[] = {7, 3, 5, 4, 5, 3, 4};
Output: 7*/
#include <stdio.h>
int findsingle (int ar[],int ar_size)
{
    int res =ar[0];
        for (int i=1;i<ar_size;i++)
            res=res ^ar[i];
        return res;
}
int main()
{
    int ar []={7,3,5,4,5,3,4};
    int n= sizeof (ar)/ sizeof (ar[0]);
    printf("Element occuring once is %d",findsingle (ar,n));
return 0;
}
