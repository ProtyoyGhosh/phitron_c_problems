// তোমাকে একটি ক্যারেক্টার দেওয়া হবে। তোমাকে ঐ ক্যারেক্টার এর পরের ক্যারেক্টার প্রিন্ট করতে হবে।

#include <stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    
    if (n == 90 || n == 122)
    {
        printf("%c",n-25);
    }else
    {
        printf("%c",n+1);
    }
    
    return 0;
}