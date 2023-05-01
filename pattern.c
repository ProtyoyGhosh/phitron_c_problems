/*print it
    *
    **
    ***
    ****
    *****
*/

// #include <stdio.h>
// int main(){
//     int n,k=1;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         k++;
//     }
    
//     return 0;
// }




/*print it
   *****
   ****
   ***
   **
   *
*/

// #include <stdio.h>
// int main(){
//     int n,k=1;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n; j >= k; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//         k++;
//     }
    
//     return 0;
// }



/*
      *
     ***
    *****
   *******
  *********
*/
// #include <stdio.h>
// int main(){
//     int n,s,k;
//     scanf("%d",&n);
//     s=n-1;
//     k=1;
//     for (int i = 0; i <n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         // line ses
//         s--;
//         k=k+2;
//         printf("\n");
//     }
    
//     return 0;
// }




/*print it
     *********
      *******
       *****
        ***
         *
*/
// #include <stdio.h>
// int main(){
//     int n,s,k;
//     scanf("%d",&n);
//     s=0;
//     k=(2*n-1);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         s++;
//         k=k-2;
//         printf("\n");
//     }
    
//     return 0;
// }




/*print it
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
*/
// #include <stdio.h>
// int main(){
//     int n,k=1;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             printf("%d ",j);
//         }
//         k++;
//         printf("\n");
//     }
    
//     return 0;
// }



/*print it
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1
*/
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int k = n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             printf("%d ",j);
//         }
//         k--;
//         printf("\n");
//     }
    
//     return 0;
// }




/*print it (diamond pattern)
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
here if n=5,total line (2*n-1)=9
*/
// #include <stdio.h>
// int main(){
//     int n,s,k;
//     scanf("%d",&n);
//     s=n-1;
//     k=1;
//     for (int i = 1; i <= (2*n)-1; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         if (i <= n-1)
//         {
//             s--;
//             k=k+2;
//         }else
//         {
//             s++;
//             k=k-2;
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }




// check sum of two values equal given number x
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
//     int flag = 0;
//     for (int i = 0; i <= n-2; i++)
//     {
//         for (int j = 1; j <= n-1; j++)
//         {
//             if (arr[i] + arr[j] == x)
//             {
//                 printf("%d + %d = %d\n",arr[i],arr[j],arr[i]+arr[j]);
//                 flag=1;
//             }
//         } 
//     }
//     if (flag == 0)
//     {
//         printf("no values found");
//     }
    
//     return 0;
// }




// slection sort,sort in assending or dessending order
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // assending
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    // dessending
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
