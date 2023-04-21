// /* Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.*/
#include <stdio.h>
int main(){
        int N;
        scanf("%d",&N);
        int A[N];
        int max,min,max_ind,min_ind;
        for(int i=0; i<N; i++)
        {
        scanf("%d",&A[i]);
        }
        max = A[0];
        min = A[0];
        max_ind = 0;
        min_ind = 0;
        for(int i=1; i<N; i++)
        {
            if(max<A[i])
            {
            max = A[i];
            max_ind = i;
            }
            if(min>A[i])
            {
            min = A[i];
            min_ind = i;
            }
        }
        A[max_ind] = min;
        A[min_ind] = max;
        for(int i=0; i<N; i++)
        {
        printf("%d ",A[i]);
        }
    
    return 0;
}



/*
Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation.

Note: The string is called too long, if its length is strictly more than 10 characters. If the string is too long then you have to print the string in the following manner:

-- Print the first character in the string.
-- Print number of characters between the first and the last characters.
-- Print the last character in the string.
For example: "localization" will be "l10n", and "internationalization" will be "i18n"*/
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        char name[101];
        scanf("%s",name);

        int length = strlen(name);
        int count = length - 2;
        char f_char = name[0];
        char l_char = name[length - 1];
        
        if (length > 10)
        {
            printf("%c%d%c\n",f_char,count,l_char);
        }else{
            printf("%s\n",name);
        }
    }
    return 0;
}



/*Given a string S. Print the origin string after replacing the following:
Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.*/

#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char a[100001];
    scanf("%s",a);
    for (i = 0; i < strlen(a); i++)
    {
        scanf("%s",&a[i]);
    }
    for (i = 0; i < strlen(a); i++)
    {
        if(a[i] == ','){
            printf(" ");
        }
        else if(a[i]>=97 && a[i]<=122){
            a[i]=a[i]-32;
            printf("%c",a[i]);

            }
         else {
            a[i]=a[i]+32;
            printf("%c",a[i]);
            }
}
    return 0;
}




/*Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.
Print "YES" if the string is palindrome, otherwise print "NO".*/
#include <stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s",s);
    int i,j;
    int flag = 1;

    for ( i = 0,j=strlen(s)-1; i < j; i++,j--)
    {
        if (s[i] != s[j])
        {
            flag = 0;
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("YES\n");
    }else
    {
        printf("NO");
    }
    
    return 0;
}



/*Given two strings A and B. Print three lines contain the following:

1.The size of the string A and size of the string B separated by a space
2.The string produced by concatenating A and B (A + B).
3.The two strings separated by a single space respectively, after swapping their first character.*/
#include <stdio.h>
#include <string.h>
int main(){
    char str1[10001];
    char str2[10001];
    scanf("%s%s",str1,str2);
    // fgets(str1,11,stdin);
    // fgets(str2,11,stdin);

    char new_str1[11];
    strcpy(new_str1,str1);
 
    printf("%d %d\n",strlen(str1),strlen(str2));
    strcat(str1,str2);
    printf("%s\n",str1);

    char temp = new_str1[0];
    new_str1[0] = str2[0];
    str2[0]=temp;

    printf("%s %s",new_str1,str2);

    return 0;
}