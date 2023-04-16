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
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int p,q;
    scanf("%d%d",&p,&q);
    arr[p]+=q;
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}

