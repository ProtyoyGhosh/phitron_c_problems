// তোমাকে তিনটি সংখ্যা দেওয়া হবে। ১ম টি হচ্ছে কয়টি চোখ আছে সেটা, ২য় টি হচ্ছে কয়টি মুখ আছে সেটা এবং সবার শেষে কয়টি শরীর আছে তা দেওয়া থাকবে। তোমাকে বলতে হবে তুমি কয়টি মূর্তি বানাতে পারবে। মূর্তি বানানো যাবে তিন ভাবে –
// ১। দুটি চোখ ও একটি শরীর দিয়ে
// ২। দুটি চোখ, একটি মুখ এবং একটি শরীর দিয়ে
// ৩। একটি চোখ, একটি মুখ এবং একটি শরীর দিয়ে
#include <stdio.h>
int main(){
    long long int eye,mouth,body,doll=0;
    scanf("%lld %lld %lld",&eye,&mouth,&body);
        // case1 for the third option.we can ignore option 2.
        if (eye<=mouth && eye<=body)
        {
            doll = eye + doll;
        }else if (mouth<=eye && mouth<=body)
        {
            doll = mouth + doll;
        }else if (body<=eye && body<=mouth)
        {
            doll = body + doll;
        }

    
        // case 2 for 1st option.
        eye = eye - doll;
        body = body - doll;
        
        long long int update_eye = eye/2;
        if (update_eye <= body)
        {
            doll = doll + update_eye;
        }else
        {
            doll = doll + body;
        }
        printf("%lld",doll);
    
    return 0;
}
