#include <stdio.h>
int main()
{
    int i, temp;
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    for (i= 0; i<n ; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
