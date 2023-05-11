// #include <stdio.h>
// int main(){
//     int age = 22;      /*value*/
//     int *ptr = &age;   /*address of the value*/
//     int _age = *ptr;   /*value at address*/
//     printf("%d %p %d",age,ptr,_age);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int x = 10;
//     int *ptr = &x;
//     *ptr = 100;
//     int *ptr2 = ptr;
//     *ptr2=500;

//     printf("value of x- %d\n",x);
//     printf("address of x- %p\n",*ptr);
//     printf("value of ptr- %p\n",*ptr);
//     return 0;
// }


// #include <stdio.h>
// void fun(int *arr,int n){
//     *(arr+1)=20;
//     arr[0]=500;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int arr[5]={2,3,4,5,6};
//     fun(arr,5);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
// }



