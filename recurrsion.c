// print 5 to 1
// #include <stdio.h>
// void print_it(int i){
//     if (i == 0) return; /*base case(must in recurrsion)*/
//     printf("%d ",i);
//     print_it(i-1);  /*calling itself*/
// }
// int main(){
//     print_it(5);
//     return 0;
// }



// print an array with recurrsion
// #include <stdio.h>
// void print_array(int arr[],int n,int i){
//     if (i==n) return;
//     printf("%d ",arr[i]);
//     print_array(arr,n,i+1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
    
//     print_array(arr,n,0);
//     return 0;
// }



// length of a string using recurrsion
// #include <stdio.h>
// int str_length(char s[],int i){
//     if (s[i] == '\0') return 0;
//     int l = str_length(s,i+1);
//     return l+1;
// }
// int main(){
//     char s[6]="hello";
//     int length = str_length(s,0);
//     printf("%d",length);
//     return 0;
// }



// print an reverse array
// #include <stdio.h>
// void fun(int arr[],int n,int i){
//     if (i == 5) return;
//     fun(arr,n,i+1);
//     printf("%d ",arr[i]);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     fun(arr,n,0);
    
//     return 0;
// }





/* Given a number N. Print "I love Recursion" N times.
Note: Solve this problem using recursion.*/
// #include <stdio.h>
// void print(int n){
//     if (n==0) return;
    
//     printf("I Love Recursion\n");
//     print(n-1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     print(n);
//     return 0;
// }



/*Given a number N. Print numbers from 1 to N in separate lines.
Note: Solve this problem using recursion*/
// #include <stdio.h>
// void print(int n,int i){
//     if (i==n+1)return;
//     printf("%d\n",i);
//     print(n,i+1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     print(n,1);
//     return 0;
// }



/*
Given a number N. Print all numbers from N to 1 separated by a single space.
Note: Solve this problem using recursion.
*/
// #include <stdio.h>
// void print(int n){
//     if (n==0)return;
//     if (n>1)
//     {
//         printf("%d ",n);
//     }else
//     {
//         printf("%d",n);
//     }
    
//     print(n-1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     print(n);
//     return 0;
// }





/*
Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.
Note:
Assume array A is 0-based indexing.
Solve this problem using recursion.
*/
// #include <stdio.h>
// void fun(int arr[],int n,int i){
//     if (i == n) return;
//     fun(arr,n,i+1);
//     if (i%2 == 0)
//     {
//         printf("%d ",arr[i]);
//     } 
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     fun(arr,n,0);
//     return 0;
// }





/*
Given a number N and an array A of N numbers. Print the summation of the array elements.
Note: Solve this problem using recursion.
*/
// #include <stdio.h>
// long long int sum(long long int arr[],int n,int i){
//     if (i==n)return 0;
//    long long int l=sum(arr,n,i+1);
//    return l+arr[i];
   
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     long long int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld",&arr[i]);
//     }
//     long long int result = sum(arr,n,0);
//     printf("%lld",result);
//     return 0;
// }