// তোমাকে একটি সংখ্যা দেওয়া হবে। তোমাকে ঐ সংখ্যার সবগুলো ভাজক বের করতে হবে। মানে কোন কোন সংখ্যা দিয়ে ঐ সংখ্যা কে ভাগ করা যায় সেগুলো প্রিন্ট করতে হবে।

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}

//  তোমাকে দুইটি সংখ্যা a এবং b দিবে। তোমাকে a-b অর্থাৎ সংখ্যা দুটির বিয়োগফল প্রিন্ট করতে হবে। এখানে একটা কিন্তু আছে। সেটা হলো a-b প্রিন্ট করবে যদি বিয়োগফল ০ বা এর চেয়ে বড় হয়।  এর চেয়ে ছোট হয়ে গেলে ০ ই প্রিন্ট করতে হবে।
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sub = a-b;
    if (sub >= 0)
    {
        printf("%d",sub);
    }else{
        printf("0");
    }
    
    return 0;
}


// তোমাকে ১০ থেকে ৯৯ এর মধ্যে একটা সংখ্যা দিবে। এবার তোমাকে বলতে হবে যে একটা ডিজিট দিয়ে অন্য আরেকটা কে ভাগ যায় কিনা। যদি ভাগ যায় তাহলে YES প্রিন্ট করতে নাহলে NO প্রিন্ট করতে।
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int f_num = n/10;
    int s_num = n%10;
    
    if (s_num % f_num == 0 || f_num % s_num == 0)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    
    return 0;
}