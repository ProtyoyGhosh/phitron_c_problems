// how to take input in 2D array
#include <stdio.h>
int main(){
    int arr [5][3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]); /*i=row,j=column*/
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}




// check a 2D matrix is null/zero matrix
// A matrix is said to be null when every element is zero
#include <stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int elements=row*column;
 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
            
        }
        
    }

    if (elements == count)
    {
        printf("This is a null matrix");
    }else
    {
        printf("Not a null matrix");
    }

    return 0;
}




/* check a matrix is diagonal or not
7 0 0
0 2 0
0 0 5  
it is a primary diagonal matrix

0 0 7
0 5 0
3 0 0
it is a secondary diagonal matrix
they also have to be a square
*/

// primary diagonal
#include <stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int flag = 1;
    if (row != column)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
            
        }
        
    }
    if (flag == 1)
    {
        printf("primary diagonal matrix");
    }else
    {
        printf("Not primary diagonal matrix");
    }
    
    
    return 0;
}



// secondary diagonal
#include <stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int flag = 1;
    if (row != column)
    {
        flag=0;
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i + j == row-1)
            {
                continue;
            }
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
            
        }
        
    }
    if (flag == 1)
    {
        printf("seconday disgonal matrix");
    }else
    {
        printf("not secondary diagonal matrix");
    }
    
    return 0;
}




/* check a matrix is scaler or not
2 0 0
0 2 0
0 0 2
this is a scaler matrix*/
#include <stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int flag = 1;
    if (row != column)
    {
        flag = 0;
    }
    int value = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != value)
                {
                    flag=0;
                }
            }
            continue;
            
            if (arr[i][j] != 0)
            {
                flag=0;
            }
            
        }
        
    }
    if (flag == 1)
    {
        printf("Scaler matrix");
    }else
    {
        printf("not scaler");
    }
    
    
    
    return 0;
}





/*check unit matrix or not
1 0 0
0 1 0
0 0 1
this is a unit matrix
*/
#include <stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int flag = 1;
    if (row != column)
    {
        flag = 0;
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    flag=0;
                }
            }
            continue;
            
            if (arr[i][j] != 0)
            {
                flag=0;
            }
            
        }
        
    }
    if (flag == 1)
    {
        printf("Unit matrix");
    }else
    {
        printf("not Unit matrix");
    }
    
    return 0;
}






/*
Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.
*/
#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int x;
    scanf("%d",&x);
    int flag=0;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                flag=1;
                break;
            }
        }
        
    }
    if (flag == 1)
    {
        printf("will not take number");
    }else
    {
        printf("will take number");
    }
    
    
    return 0;
}




/*
Given two numbers N, M and a 2D array of size N * M. Print the inverted array that appeared in the mirror.
*/
#include <stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = column-1; j >= 0; j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}





/*Given two matrices A and B of size R * C. Print the summation of A and B */
#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c],brr[r][c],crr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&brr[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j];
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}