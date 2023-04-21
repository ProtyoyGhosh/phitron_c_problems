// copy string b to a
#include <stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    scanf("%s%s",&a,&b);
    int len_b = strlen(b);
    for (int i = 0; i <= len_b; i++)
    {
        a[i] = b[i];
    }
    printf("%s",a);

    return 0;
}



// lexicographical compaire
#include <stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);

    int i = 0;
    while (1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("duitai soman");
            break;
        }else if (a[i]=='\0')
        {
            printf("a choto");
            break;
        }else if (b[i]=='\0')
        {
            printf("b choto");
            break;
        }
        if (a[i] == b[i])
        {
            i++;
        }else if (a[i]<b[i])
        {
            printf("a choto");
            break;
        }else
        {
            printf("b choto");
        } 
    }


    // using built in function
    int v = strcmp(a,b);
    if (v < 0)
    {
        printf("%s choto",a);
    }else if (v > 0)
    {
        printf("%s choto",b);
    }else
    {
        printf("duitai soman");
    }
       
    return 0;
}



// concatinate two strings
#include <stdio.h>
#include <string.h>
int main(){
    char a[10000];
    char b[100];
    scanf("%s%s",a,b);

    int len_a=strlen(a);
    int len_b=strlen(b);

    int i,j;
    for (i = 0,j=len_a; i <= len_b; i++,j++)
    {
        a[j]=b[i];
    }

    // using built in function
    // strcat(a,b);

    printf("%s",a);
    
    return 0;
}



// counting array OR friquency array
// need to count one number how many times apearing in an array
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // int zero=0,one=0,two=0,three=0;
    int cnt_arr[4]={0};
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] == 0)
        // {
        //     zero++;
        // }
        // if (arr[i] == 1)
        // {
        //     one++;
        // }
        cnt_arr[arr[i]]++;
        
    }
    for (int i = 0; i <= 3; i++)
    {
        printf("%d count -%d\n",i,cnt_arr[i]);
    }
    
    
    return 0;
}



// frequncy count on string
#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int cnt_str[26]={0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 97;
        cnt_str[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c count- %d\n",i + 97,cnt_str[i]);
    }
    
    
    return 0;
}




// Given two strings X and Y . Print the smallest lexicographical one.
#include <stdio.h>
#include <string.h>
int main(){
    char x[101];
    char y[101];
    scanf("%s%s",x,y);

    int result = strcmp(x,y);
    if (result > 0)
    {
        printf("%s",y);
    }else if (result < 0)
    {
        printf("%s",x);
    }else
    {
        printf("%s",x);
    }
    
    return 0;
}




// Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.  >>>> not solved <<<<<
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     char arr[n];
//     scanf("%s",arr);
//     printf("%s",arr);
    
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int value = arr[i] - '0';
//         count += value;
//     }
//     // printf("\n%d",count);
    
//     return 0;
// }




// Given a string S. Determine how many times does each letter occurred in S. you must print letters in ascending order.
#include <stdio.h>
int main(){
    char s;
    int cnt_str[26] = {0};
    while (scanf("%c",&s) != EOF)
    {
        cnt_str[s-97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt_str[i] > 0)
        {
            printf("%c : %d\n",i+97,cnt_str[i]);
        }
    }
    
    return 0;
}



//Given 2 numbers N, M and an array A of N numbers. For every number from 1 to M, print how many times this number appears in this array.
#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int count[1000001]={0};
    // for (int i = 1; i <= m; i++)
    // {
    //     count[i]=0;
    // }
    
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i<=m; i++)
    {
        printf("%d\n",count[i]);
    }

    return 0;
}




// You will be given a string S as input contains only small English alphabets. You need to tell the number of ‘a’ , ‘e’ , ‘i’ in it.
#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    scanf("%s",s);

    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i')
        {
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}




// Count small and capital letters in a string
#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s",s);
    int sm_cnt=0,cap_cnt=0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            cap_cnt++;
        }else if (s[i] >= 97 && s[i] <= 122 )
        {
            sm_cnt++;
        }
        
    }
    printf("capital: %d\nsmall: %d",cap_cnt,sm_cnt);
    
    return 0;
}




// You will given an integer array A and the size N. You will also be given an integer value P. You need to tell in which index P appeared first in the array.
#include <stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&p);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == p)
        {
            printf("%d",i);
            break;
        }
    }
    
    return 0;
}