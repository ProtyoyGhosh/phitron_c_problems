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




// wirte a function to calculate the factorial value of any intiger enter through the keyboard
#include <stdio.h>
int factorial(int n);
int main(){
    int n;
    scanf("%d",&n);
    factorial(n);
    return 0;
}
int factorial(int n){
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}