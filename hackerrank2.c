// You will be given an integer N. If N is a negative number or zero print from N to 1, otherwise print from 1 to N.
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if (n<=0)
//     {
//         for (int i = n; i <= 1; i++)
//         {
//             printf("%d ",i);
//         }
//     }else if (n>0)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             printf("%d ",i);
//         }
        
//     }
    
//     return 0;
// }



// You will be given a positive integer N and N numbers after that. You need to tell the sum of even numbers and the sum of odd numbers separated by a space.
// #include <stdio.h>
// int main(){
//     int n,even = 0,odd = 0;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//          if (arr[i] % 2 == 0)
//         {
//             even = even + arr[i];
//         }else
//         {
//             odd = odd + arr[i];
//         }
        
//     }
    
//      printf("%d %d",even,odd);

//     return 0;
// }



// You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int x,v;
//     scanf("%d%d",&x,&v);
//     arr[x] = v;
//     for (int i = n-1; i >= 0; i--)
//     {
//         printf("%d ",arr[i]);
//     }
    
    
//     return 0;
// }



// You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at even indexes in reverse way.
#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        
    }

    for (i = n-1; i >= 0 ; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ",arr[i]);
        }
    }
    
    return 0;
}