#include <stdio.h>
int main()
{
    int i ;
    int arr[] = {16,17,4,3,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int cur_lea = arr[n-1];
    printf("%d\n", cur_lea);
    for (i = n-2; i >= 0; i--)
    {
        if (arr[i] >  cur_lea)
        {
            cur_lea = arr[i];
            printf("%d\n", cur_lea);
        }
    }
    
}
