// Given the sum of four numbers and three of those numbers, find the missing number. All four numbers are positive integers.
// #include <stdio.h>
// int main(){
//     int test;
//     scanf("%d",&test);
//     for (int i = 0; i < test; i++)
//     {
//         int sum,a,b,c,x;
//         scanf("%d %d %d %d",&sum,&a,&b,&c);
//         int sum_3=a+b+c;
//         x=sum-sum_3;
//         printf("%d",x);
//         printf("\n");
//     }
    
//     return 0;
// }




// You will be given a matrix of size N * N. You need to tell if it is unit matrix or not.
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int first = 1;
//     printf("%d\n",first);
//     int flag = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i==j && arr[i][j] != first)
//             {
//                 flag = 0;
//             }
//             if (i!=j && arr[i][j] != 0)
//             {
//                 flag = 0;
//             }
//         }
//     }
//     if (flag == 1)
//     {
//         printf("YES");
//     }else
//     {
//         printf("NO");
//     }
    
//     return 0;
// }





// You will be given a 2D matrix of N * M size. The matrix will contain integer value only. You need to print the values of last row and then print the values of last column.
// #include <stdio.h>
// int main(){
//     int n,m;
//     scanf("%d %d",&n,&m);
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ",arr[n-1][j]);
//         }
//         break;
//     }
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ",arr[i][m-1]);
//             break;
//         }
//     }
//     return 0;
// }




// You will be given a string S consisting of small alphabets, capital alphabets and spaces. You need to count number of small alphabets, capital alphabets and spaces in the string S.
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char s[1002];
//     fgets(s,1002,stdin);
//     int small=0,cap=0,space=0;
//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             small++;
//         }if (s[i] >= 'A' && s[i] <= 'Z')
//         {
//             cap++;
//         }else if (s[i] == 32)
//         {
//             space++;
//         }
//     }
//     printf("Capital - %d\nSmall - %d\nSpaces - %d",cap,small,space);
    
//     return 0;
// }





/*
Write a C program that will take an integer N and creates this pattern for the corresponding inputs.
For example,If N=3, the pattern look like this,
  ^
 ***
^^^^^ 
*/
// #include <stdio.h>
// int main(){
//     int n,s,k;
//     scanf("%d",&n);
//     s=n-1;
//     k=1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             if (i % 2 == 0)
//             {
//                 printf("^");
//             }else{
//                 printf("*");
//             }
            
//         }
//         s--;
//         k+=2;
//         printf("\n");
//     }
    
//     return 0;
// }





/*
Tiger and Pathan are bored with movies and want to play a game. They will play the game in N round. Each time, both of them will guess a number X1 and X2, and whoever guesses the larger number will win that round. The final winner will be the one who wins the most rounds. In the event that they both win an equal number of times, the game will end in a draw
*/
// #include <stdio.h>
// int main(){
//     int test,tiger=0,pathan=0;
//     scanf("%d",&test);
//     for (int i = 0; i < test; i++)
//     {
//         long long int x1,x2;
//         scanf("%lld %lld",&x1,&x2);
//         if (x1 > x2)
//         {
//             tiger++;
//         }else if (x2 > x1)
//         {
//             pathan++;
//         }
        
//     }
//     if (tiger > pathan)
//     {
//         printf("Tiger");
//     }else if (pathan > tiger)
//     {
//         printf("Pathan");
//     }else
//     {
//         printf("Draw");
//     }
    
//     return 0;
// }





/*
There are N army people standing in a line. Their major ordered them to make a line in asceding order according to their age. And then the major called the person stading in the middle. If there are two people in the middle then he will call both of them. Can you tell the age of the middle man or men?

Note: If N is odd then the middle person will be (N+1)/2 otherwise there will be two person in the middle, and they are (N/2) and (N/2)+1.
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int temp = arr[i];
            if (arr[i] > arr[j])
            {
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    
    int m,m1,m2;
    if (n%2==1)
    {
        m = (n+1)/2;
        printf("%d",arr[m-1]);
    }else if (n%2==0)
    {
        m1=n/2;
        m2=(n/2)+1;
        printf("%d %d",arr[m1-1],arr[m2-1]);
    }
    
    return 0;
}