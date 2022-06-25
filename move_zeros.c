#include <stdio.h>
int main()
{
    int i; 
    int temp;
    int arr[] = { 0,12,52,0,36,1,2,0,3,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for (i = 0; i <n ; i++)
    {
        if(arr[i] != 0)
        {
           temp = arr[i] ;
           arr[i] = arr[count];
           arr[count] = temp;
           count += 1;
        }
       
    }
    
    for (i = 0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
