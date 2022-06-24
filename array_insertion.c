#include <stdio.h>
int insert(int arr[], int n, int capacity, int index )
{
    
    if (capacity == index)
       return n;
    else{
        int j ;
        for ( j = n  - 1; j >= index; j--)
        {
            arr[j+1] =  arr[j];
        }
        arr[index] = 20;
    }
    return n+1;
}
int main()
{
    int arr[5] = { 10,30,40};
    int i,n ; 
    int index = 1;
    int capacity;
    capacity = 5;
    n  = 3;
    n = insert(arr, n, capacity, index);
    printf("%d", n );
    for (i = 0; i<= n-1; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}

