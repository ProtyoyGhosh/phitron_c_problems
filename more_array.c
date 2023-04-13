// // Given a number N and an array A of N numbers. Print the absolute summation of these numbers
// #include <stdio.h>
// int main(){
//     int n,sum = 0;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//         sum = sum + arr[i];
//     }
//     if (sum < 0)
//     {
//         sum = sum * -1;
//     }
//     printf("%d",sum);
    
//     return 0;
// }


// Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index)
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int x;
//     scanf("%d",&x);
//     int ans = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             ans = i;
//             break;
//         }
        
//     }
//     printf("%d",ans);
    
//     return 0;
// }



/* Given a number N and an array A of N numbers. Print the array after doing the following operations:
Replace every positive number by 1.
Replace every negative number by 2.*/
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//         if (arr[i] > 0)
//         {
//             arr[i] = 1;
//         }else if (arr[i] < 0)
//         {
//             arr[i] = 2;
//         }
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
// }


// Given a number N and an array A of N numbers. Print all array positions that store a number less than or equal to 10 and the number stored in that position.
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//         if (arr[i] <= 10)
//         {
//             printf("arr[%d] = %d\n",i,arr[i]);
//         }
        
//     }
    
//     return 0;
// }



/*Given a number N and an array A of N numbers. Print the lowest number and its position.
Note: if there are more than one answer print first one's position*/
// #include <stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     int low_num = INT_MAX , position;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < low_num)
//         {
//             low_num = arr[i];
//             position = i + 1;
//         }
        
//     }
//     printf("%d %d ",low_num,position);
    
//     return 0;
// }


// Given a number N and an array A of N numbers. Print the array in a reversed order.
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
     scanf("%d",&arr[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}