/*
The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X%
 and its price P
 after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!
*/
// #include <stdio.h>
// int main(){
//     float discount,sell_price,original_price;
//     scanf("%f %f",&discount,&sell_price);
//     discount=discount/100;
//     original_price=sell_price/(1-discount);
//     printf("%0.2f",original_price);
//     return 0;
// }






/*
Memo and Momo are playing a game. Memo will choose a positive number a, and Momo will choose a positive number b Your task is to tell them who will win according to the following rules:
If both a and b are divisible by k, both of them win and you should print "Both".If a is divisible by k but b isn't, Memo wins and you should print "Memo".If b is divisible by k but a isn't, Momo wins and you should print "Momo".If both a and b are not divisible by k, no one wins and you should print "No One"
*/
// #include <stdio.h>
// int main(){
//     long long int a,b,x;
//     scanf("%lld %lld %lld ",&a,&b,&x);
//     if (a%x == 0 && b%x == 0)
//     {
//         printf("Both");
//     }else if (a%x==0)
//     {
//         printf("Memo");
//     }else if (b%x==0)
//     {
//         printf("Momo");
//     }else
//     {
//         printf("No One");
//     }
    
    
//     return 0;
// }





// Given the width and the height of a shape determine whether it's for a square or a rectangle?
// #include <stdio.h>
// int main(){
//     int test;
//     scanf("%d",&test);
//     for (int i = 0; i < test; i++)
//     {
//         int w,l;
//         scanf("%d %d",&w,&l);
//         if (w==l)
//         {
//             printf("Square");
//         }else
//         {
//             printf("Rectangle");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }





/*
You are given an array a of n integers, and an integer k You can choose at most k elements and get their summation. What is the maximum summation you can get?
*/
// #include <stdio.h>
// int main(){
//     int n,k;
//     scanf("%d %d",&n,&k);
//     long long int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld",&arr[i]);
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             int temp = arr[i];
//             if (arr[i] < arr[j])
//             {
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }   
//         }
//     }
//     long long int sum =0;
//     for (int i = 0; i < k; i++)
//     {
//         if (arr[i] > 0)
//         {
//             sum+=arr[i];
//         }
        
//     }
//     printf("%lld",sum);
    
//     return 0;
// }






/*
Given a number N and an array A of N numbers. Determine if the array is lucky or not.
Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.
*/
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             int min=arr[i];
//             if (arr[i] > arr[j])
//             {
//                 arr[i]=arr[j];
//                 arr[j]=min;
//             }       
//         }
//     }
//     int min = arr[0];
//     int count =0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == min)
//         {
//             count++;
//         }
//     }
    
//     if (count % 2 == 0)
//     {
//         printf("Unlucky");
//     }else
//     {
//         printf("Lucky");
//     }
    
    
//     return 0;
// }