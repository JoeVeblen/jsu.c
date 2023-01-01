#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k;
    scanf("%d", &k);
    int s = sizeof(a) / sizeof(a[0]);
    int right = s - 1;
    int left = 0;
    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (a[mid] > k)
        {
            right = mid - 1;
        }
        else if (a[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            printf("the position of the num£º%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("NULL\n");
    }
    return 0;
}