// #include <stdio.h>
// void indian();
// void french();
// int main(){
//     char ch;
//     scanf("%c",&ch);
//     if (ch == 'i')
//     {
//         indian();
//     }else
//     {
//         french();
//     }
    
//     return 0;
// }
// void indian(){
//     printf("Namaste!!");
// }
// void french(){
//     printf("Bonjure");
// }



// print table
// #include <stdio.h>
// void printTable(int n);
// int main(){
//     int n;
//     scanf("%d",&n);

//     printTable(n);
//     return 0;
// }
// void printTable(int n){
//     for (int i = 1; i <= 10; i++)
//     {
//         int result = n*i;
//         printf("%d * %d = %d\n",n,i,result);
//     }
    
// }




// // wirte a function to calculate the factorial value of any intiger enter through the keyboard
// #include <stdio.h>
// int factorial(int n);
// int main(){
//     int n;
//     scanf("%d",&n);
//     factorial(n);
//     return 0;
// }
// int factorial(int n){
//     int fact = 1;
//     for (int i = n; i >= 1; i--)
//     {
//         fact=fact*i;
//     }
//     printf("%d",fact);
// }



// #include <stdio.h>
// int sum(int num){
   
//     int f_no = num/1000;
//     int l_no = num%10;  
//     return f_no+l_no;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int result =  sum(n);
//     printf("%d",result);
//     return 0;
// }




// Given two numbers X and Y, Print their summation
// #include<stdio.h>
//  int sum(int num1, int num2) {
//    int num3;
//    num3 = num1 + num2;
//    return (num3);
// }
// int main() {
//    int num1, num2, res;
 
//    scanf("%d %d", &num1, &num2);
 
//    //Call Function Sum With Two Parameters
//    res = sum(num1, num2);
 
//    printf("%d",res);
//    return (0);
// }




// Given a number N. Print all numbers from 1 to N.
// #include <stdio.h>
// int print(int x){
//     for (int i = 1; i <= x; i++)
//     {
//         if (i<x)
//         {
//             printf("%d ",i);
//         }else
//         {
//             printf("%d",i);
//         }  
//     }
    
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     print(n);
//     return 0;
// }




// Given an array A of size N. Print the minimum and the maximum number in the array
// #include <stdio.h>
// int find(int *arr,int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             int swap = arr[i];
//             if (arr[i] > arr[j])
//             {
//                 arr[i]=arr[j];
//                 arr[j]=swap;
//             }
            
//         }
        
//     }
//     printf("%d %d",arr[0],arr[n-1]);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     find(arr,n);
    
//     return 0;
// }




// Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.
// #include <stdio.h>
// int main(){
//     int arr[3],brr[3];
//     for (int i = 0; i < 3; i++)
//     {
//         scanf("%d",&arr[i]);
//         brr[i]=arr[i];
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = i+1; j < 3; j++)
//         {
//             int swap = arr[i];
//             if (arr[i] > arr[j])
//             {
//                 arr[i]=arr[j];
//                 arr[j]=swap;
//             }
            
//         }
        
//     }
    
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d\n",brr[i]);
//     }
    
//     return 0;
// }
 




/*  here are three doors in front of you, numbered from 1 to 3
 from left to right. Each door has a lock on it, which can only be opened with a key with the same number on it as the number on the door.

There are three keys — one for each door. Two of them are hidden behind the doors, so that there is no more than one key behind each door. So two doors have one key behind them, one door doesn't have a key behind it. To obtain a key hidden behind a door, you should first unlock that door. The remaining key is in your hands.

Can you open all the doors?*/
#include <stdio.h>
void solve(){
    int key;
    scanf("%d",&key);

    int arr[5];
    for (int i = 1; i <= 3; i++)
    {
        scanf("%d",&arr[i]);
    }
    if (arr[key] == 0)
    {
        printf("NO\n");
        return;
    }
    key=arr[key];
    if (arr[key] == 0)
    {
        printf("NO\n");
        return;
    }
    printf("YES\n");
    
}
int main(){
    int test;
    scanf("%d",&test);
    while (test--)
    {
        solve();
    }
    
    return 0;
}