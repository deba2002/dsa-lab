/*6.Given array of integer, find the next smaller of next greater element of every element in array. 
Elements for which no greater element exists or no smaller of greater element exist, print -1.*/

#include <stdio.h>
void findNextGreaterElements(int input[], int n)
{
    // do for each element
    for (int i = 0; i < n; i++)
    {

        int next = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (input[j] > input[i])
            {
                next = input[j];
                break;
            }
        }
 
        printf("%d ", next);
    }
}
 
int main(void)
{
    int input[] = { 2, 7, 3, 5, 4, 6, 8 };
    int n = sizeof(input) / sizeof(input[0]);
 
    findNextGreaterElements(input, n);
 
    return 0;
}
