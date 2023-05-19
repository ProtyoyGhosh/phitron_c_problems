/*
Given two numbers a and b. You have to answer with "YES" if there is a non-empty interval consisting of numbers from l to r(l,l+1,l+2,...,r) with a odd numbers and b even numbers, or "NO" otherwise
*/
/*
cases:
1.a=0 and b=0 >>>no
2.a==b >>>yes
3.abs(a-b)=1 >>>yes
4.else >>>no
*/
#include <stdio.h>
#include <math.h>
int main(){
    int odd,even;
    scanf("%d %d",&odd,&even);
    if (odd==0 & even==0)
    {
        printf("NO");
    }else if (odd == even)
    {
        printf("YES");
    }else if (abs(odd-even) == 1)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    
    
    return 0;
}





// only one line given an odd number print the pattern
//    \***/
//    *\*/*
//    **X**
//    */*\*
//    /***\

/*
here we have 4 cases
1.primary diagonal print- \
2.secondary diagonal print- /
3.middle print- X
4.else print- *
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==(n+1)/2 && j==(n+1)/2)
            {
                printf("X");
            }else if (i+j == n+1)
            {
                printf("/");
            }else if (i==j)
            {
                printf("\\");
            }else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}





/*
You are given N numbers, and you should divide them into consecutive groups of size K, then print the minimum among each group. If the last group is of size <K, print the minimum number found just after the last number received.
*/
#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    
    int j = k-1;  /*deviding group,*/
    int mn = __INT_MAX__;   /*finding minimum,so taking max range*/
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
        if (i == j)
        {
            printf("%d ",mn);
            j+=k;
            mn = __INT_MAX__;
        }
        
    }
    if (n%k != 0)
    {
        printf("%d ",mn);
    }

    return 0;
}




/*
You are given a range represented by two integers L and R, and you should find the sum of the numbers in the range between L and R inclusive.
first line concided number of test cases
*/
#include <stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    for (int i = 0; i < test; i++)
    {
        long long int l,r,count=0;
        scanf("%lld %lld",&l,&r);
        for (int i = l; i <= r; i++)
        {
            count+=i;
        }
        printf("%lld\n",count);
    }
    
    return 0;
}




/*
You are given an array a of n integers. we want to make some operations on it.The operation is at each element that is equal to Zero - starting from the beginning of the array-, reverse the order of all elements before it.
What is the final order of this array?
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = 0,k=i-1; j < k; j++,k--)
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}




/*
Let's define f(x) as the number of times at which the integer x can be divided by 2.You are given N numbers, and you should print the maximum f(x) among all these numbers.
*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int count = 0;
    int vagfol = n/2;
    for (int i = 0; i < vagfol; i++)
    {
        count++;
        vagfol/=2;
    }
    printf("%d",count);
    return 0;
}



/*
You will be given three non-negative integers A,B and C. You need to tell if these integers form an equilateral triangle (A triangle whose three sides are the same and each side contains a positive value). If the answer is yes, print "Yes" otherwise "No".
*/
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==0)
    {
        printf("No");
    }else if (a==b && b==c && a==c)
    {
        printf("Yes");
    }else
    {
        printf("No");
    }
    
    
    return 0;
}




/*
There are N students in a class. Recently they got their Math course marks. One of them got the highest marks. So now they want to know how much more marks they need to get the highest mark. Can you calculate for every student what is the difference between their marks and the highest marks and print them!
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int hs = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > hs)
        {
            hs=arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",hs-arr[i]);
    }
    
    return 0;
}




/*
print the pattern for any given odd number

***#***
***#***
***#***
#######
***#***
***#***
***#***

*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==(n+1)/2 || j==(n+1)/2)
            {
                printf("#");
            }else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}




/*
You are given a list of numbers. Now find the position of a specific number from the list; if the number is not found in the given list then you have to print Not Found.
*/
#include <stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    for (int j = 0; j < test; j++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int k;
        scanf("%d",&k);

        int falg = 0;
        int l;
        for (l = 0; l < n; l++)
        {
            if (arr[l] == k)
            {
                falg=1;
                break;
            }
        }

        if (falg==1)
        {
            printf("Case %d: %d",j+1,l+1);
            
        }
        else
        {
            printf("Case %d: Not Found",j+1);
        }
        
        printf("\n");
    }
    
    return 0;
}