// reverse an array
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i = n-1; i >=0; i--)
//     {
//         printf("%d ",arr[i]);
//     }
    
    
//     return 0;
// }


// sum of an array
// #include <stdio.h>
// int main(){
//     int n,sum=0;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//         sum = sum + arr[i];
//     }
//     printf("%d",sum);
//     return 0;
// }



// you will given a positive intiger N and an array A of size N,also you will be givrn two values p & q.You need to add the value of pth index to q and then print the array in reverse way
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     int p,q;
//     scanf("%d%d",&p,&q);
//     arr[p]+=q;
//     for (int i = n-1; i >= 0; i--)
//     {
//         printf("%d ",arr[i]);
//     }
    
    
//     return 0;
// }



/* Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int min_index = 0;
    int max = arr[0];
    int max_index = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }

    arr[min_index] = max;
    arr[max_index] = min;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
