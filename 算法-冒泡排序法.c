#include <stdio.h>
# define MAXN 10

int main()
{
        int i, index, j, n, temp;
        int a[MAXN];

        scanf("%d", &n);
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        
        for( i = 1; i < n; i++ ){
            for(j=0;j<n-1-i;j++)
{
                if (a[j]>a[j+1]){               
temp=a[j];a[j]=a[j+1];a[j+1]=a[j]; }
            }
        }
for(i = 0; i < n; i++) {
            if (i==0){
                printf("%d", a[i]);
            }else{
                printf("% d",a[i]);}
        }
        printf("\n");
        return 0;
}