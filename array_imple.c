// insert a number in an existing array
#include <stdio.h>
int main(){
    int n;   /*say input array size 5*/
    scanf("%d",&n);
    int arr[n+1];    /* we want to move one index so we need an extra index (5 + 1 = 6)*/
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);   /*store the input of array[5]*/
    }

    int position,value;       /*input what index pos we want to insert & the number*/
    scanf("%d%d",&position,&value);  

    for (int i = n; i >= position + 1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[position] = value;

    for (int i = 0; i <= n ; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}


// practice same problem
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int position,value;
    scanf("%d %d",&position,&value);
    for (int i = n; i >= position+1 ; i--)
    {
        arr[n] = arr[n-1];
    }
    arr[position] = value;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}




// delete an element from an array
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int position;
    scanf("%d",&position);
    for (int i = position; i < n; i++)
    {
        arr[i]=arr[i+1];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}





// reverse an array
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
   int i=0, j=n-1;
   while (i<j)
   {
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
   }
   for (int i = 0; i < n; i++)
   {
     printf("%d ",arr[i]);
   }
   
    return 0;
}





// copy elements of 2 arrays into another array;
#include <stdio.h>
int main(){
    int n;                 /*taking input array size*/
    scanf("%d",&n);
    int arr[n];            /* taking input array*/
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int m;                 /*taking input array size*/
    scanf("%d",&m);
    int brr[m];            /* taking input array*/
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&brr[i]);
    }
    
    int store[n+m];         /*will copy elements of those two array here,size - n+m*/
    for (int i = 0; i < n; i++)
    {
        store[i] = arr[i];  /*copying the elements of first array to the store array*/
    }

    // now will work on the 2nd array(brr[m]),we will loop the array;

    int i = n;  /*store array er first index gula te arr[] array er elemts gula bose gese,(n-1) ghor obdi,tai 2nd array(brr[]) er elements gula store array r n no index theke bosa start hobe */
    for (int j = 0; j < m; j++)
    {
        store[i] = brr[j];  /*store er n no index e brr[] er 1st element bosbe*/
        i++;        /*increment hoye i = n+1 mane next index hobe*/
    }
    

    for (int i = 0; i < n+m; i++)
    {
        printf("%d ",store[i]);
    }
    
    
    return 0;
}