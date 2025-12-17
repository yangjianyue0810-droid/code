#include <stdio.h>
# define MAXN 10
int main()
{
    int i, index, k, n, temp;
    int a[MAXN];

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    for(k = 0; k < n-1; k++){
        index = k;  
        for(i=k+1;i<n;i++)
{
            if(a[i]<a[index])
{index = i;  }    
        }  
        
temp=a[k];a[k]=a[index];a[index]=temp;

    }
   for(i = 0; i < n; i++) {
        if(i==0)
{
            printf("%d", a[i]);
        }else{
            printf(" %d", a[i]);
        }
    }
    printf("\n");

    return 0;
}