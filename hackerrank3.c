// You will be given an integer array A of size N. You need to count the number of even elements and the number of odd elements in the array and print them.
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int even_el=0,odd_el=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2==0)
        {
            even_el++;
        }else
        {
            odd_el++;
        }
        
    }
    printf("%d %d",even_el,odd_el);
    
    return 0;
}




// You will be given a string S as input contains only small English alphabets. You need to tell the number of vowels in it. The string will not contain any spaces.
#include <stdio.h>
#include <string.h>
int main(){
    char s[1001];
    scanf("%s",s);

    int cnt_vowel=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            cnt_vowel++;
        }
        
    }
    printf("%d",cnt_vowel);
    
    return 0;
}





// Suppose there are M1 workers who can complete a work in D days. Unfortunately, some of them became sick before the start of the work, and now there are M2 workers. Can you tell how many days it will take for them to complete the work?
#include <stdio.h>
int main(){
    int m1,m2,d,result;
    scanf("%d%d%d",&m1,&m2,&d);
    result = (m1 * d)/m2;
    printf("%d",result);
    return 0;
}




// You will be given a string S. The string will contain both small and capital English alphabets only. You need to tell how many of them are capital alphabets and how many are small alphabets.
#include <stdio.h>
#include <string.h>
int main(){
    char s[1001];
    scanf("%s",s);

    int sm_cnt=0,cap_cnt=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>=65 && s[i]<=90)
        {
            cap_cnt++;
        }else if (s[i]>=97 && s[i]<=122)
        {
            sm_cnt++;
        }
    }
    printf("%d %d",cap_cnt,sm_cnt);
    
    return 0;
}




// You will be given two positive integer N and K. You need to print from 1 to N, and you need to do this K times.
#include <stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);

    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j <=n ; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}




// You will given an integer array A and the size N. You will also be given an integer value X. You need to tell how many times X was appeared in the array.
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int count = 0,x;
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
        
    }
    
    printf("%d",count);
    return 0;
}





// You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears.
#include <stdio.h>
#include <string.h>
int main(){
    char s[1001];
    scanf("%s",s);

    int cnt_str[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 97;
        cnt_str[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n",i+97,cnt_str[i]);
    }
    
    return 0;
}
