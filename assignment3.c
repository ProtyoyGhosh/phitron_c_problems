// Write a C program to take positive integer N as input and print a pattern shown in the sample input output.
/*
      1
     123
    12345
   1234567
    12345
     123
      1
*/
// #include <stdio.h>
// int main(){
//     int n,s,k;
//     scanf("%d",&n);
//     s=n-1;
//     k=1;
//     for (int i = 1; i <= (2*n-1); i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("%d",j);
//         }
//          printf("\n");
//         if (i<=n-1)
//         {
//             s--;
//             k+=2;
//         }else
//         {
//             s++;
//             k-=2;
//         }
         
//     }
    
//     return 0;
// }





// Write a C program to take positive integer N as input and print a pattern shown in the sample input output.
/*
      1
     22
    333
   4444
  55555 
*/
// #include <stdio.h>
// int main(){
//     int n,s,k;
//     scanf("%d",&n);
//     s=n-1;
//     k=1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= s ; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("%d",i);
//         }
//         s--;
//         k++;
//         printf("\n");
//     }
    
//     return 0;
// }




// Write a function named count_before_zero() which receives an array of integers and the size of that array and counts the number of elements in that array until you find zero and returns that count. Call that function in the main function and print the count there.
// #include <stdio.h>
// int count_before_zero(int *arr,int n){
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             count++;
//         }else
//         {
//             break;
//         }
        
//     }
//     return count;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int result = count_before_zero(arr,n);
//     printf("%d",result);
    
//     return 0;
// }




// Has Return + Parameter
// function to calculte factorial value of an integer
// #include <stdio.h>
// int fact(int x){
//     int fact=1;
//     for (int i=x;i>=1;i--)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int result = fact(n);
//     printf("%d",result);
//     return 0;
// }


// Has Return + No Parameter
//Area of a circle
#include <stdio.h>
float print_area(){
    float value_pi=3.1416;
    float r;
    scanf("%f",&r);
    float area = value_pi * r * r;
    return area;

}
int main(){
    float area = print_area();
    printf("Area of circle is: %0.2f",area);
    return 0;
}



// No Return + Parameter
// print multiplication table
// #include <stdio.h>
// void table(int x){
//     for (int i = 1; i <= 10; i++)
//     {
//         int result = x*i;
//         printf("%d * %d = %d\n",x,i,result);
//     }
    
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     table(n);
//     return 0;
// }



// No Return + No Parameter
// function to choose your menu
// #include <stdio.h>
// void bangali(){
//     printf("Eating panta & elish");
// }
// void italian(){
//     printf("Eating Pizza");
// }
// void french(){
//     printf("Eating Pasta");
// }
//  int main(){
//     char ch;
//     scanf("%c",&ch);
//     printf("Type b for bengali,i for italian,f for french\n");
//     if (ch == 'b')
//     {
//         bangali();
//     }else if (ch == 'i')
//     {
//         italian();
//     }else if (ch == 'f')
//     {
//         french();
//     }else
//     {
//         printf("wrong input!!!");
//     }
    
//     return 0;
// }




// Write a function named is_palindrome() which will receive a string as parameter from the main function and this function will return 1 if the string is palindrome, otherwise it will return 0. And with the help of this 1 or 0 print “Palindrome” or “Not Palindrome” in the main function.
// #include <stdio.h>
// #include <string.h>
// int is_palindrome(char s[]){
//     int i,j;
//     int flag = 1;

//     for ( i = 0,j=strlen(s)-1; i < j; i++,j--)
//     {
//         if (s[i] != s[j])
//         {
//             flag = 0;
//             break;
//         }
        
//     }
//     return flag;
// }
// int main(){
//     char s[1001];
//     scanf("%s",s);
//     int flag = is_palindrome(s);
//     if (flag == 1)
//     {
//         printf("Palindrome");
//     }else
//     {
//         printf("Not Palindrome");
//     }
    
    
//     return 0;
// }


// call by value example
// #include <stdio.h>
// int change_it(int value){
//     printf("before changing the value(in user defined func)- %d\n",value);
//     // 100
//     printf("address of the variable num in user func- %p\n",&value);
//     // 0061FF00 (different from main)
//     value = 500;
//     printf("after changing the value(in user defined func)- %d\n",value);
//     // 500
// }
// int main(){
//     int num = 100;
//     printf("num before function call(in main)- %d\n",num);
//     // 100
//     printf("address of the variable num in main- %p\n",&num);
//     // 0061FF1C
//     change_it(num);
//     printf("num after function call(in main)- %d\n",num);
//     // 100
//     return 0;
// }



// // pass by reference example
// #include <stdio.h>
// void swap(int *x,int *y){
//     int temp = *x;
//     *x=*y;
//     *y=temp;
//     return;
// }
// int main(){
//     int a=100;
//     int b=200;
//     printf("value of a before swaping: %d\n",a);
//     printf("value of b before swaping: %d\n",b);
//     printf("address of a before swaping: %p\n",&a);
//     printf("address of b before swaping: %p\n\n",&b);

//     swap(&a,&b);

//     printf("value of a after swaping: %d\n",a);
//     printf("value of b after swaping: %d\n",b);
//     // changes the value of a&b
//     printf("address of a after swaping: %p\n",&a);
//     printf("address of b after swaping: %p\n",&b);
//     // address remain same
//     return 0;
// }

