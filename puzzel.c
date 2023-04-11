// তোমাকে তিনটা সংখ্যা a,b,c দেওয়া হবে এবং একটা উত্তর d দেওয়া হবে। a,b,c এর মাঝে +,-,* এগুলো ইচ্ছামতো বসিয়ে উত্তর d করতে পারবে কিনা তা বলতে বলা হয়েছে। করতে পারলে YES প্রিন্ট করবে নাহলে NO প্রিন্ট করবে।
#include <stdio.h>
int main(){
    int a,b,c,result;
    scanf("%d%d%d%d",&a,&b,&c,&result);
    if (a+b-c == result)
    {
        printf("YES");
    }else if (a-b+c == result)
    {
        printf("YES");
    }else if (a+b*c == result)
    {
        printf("YES");
    }else if (a*b+c == result)
    {
        printf("YES");
    }else if (a-b*c == result)
    {
        printf("YES");
    }else if (a*b-c == result)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    
    
    return 0;
}