#include<stdio.h>
#define MAXN 6
int main(){
    int n,i,j,p,k,q;
    scanf("%d",&n);
    int arr[MAXN][MAXN];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(p=0;p<n;p++){
        int MAX = arr[p][0];
        for(q=0;q<n;q++){
            if(MAX<arr[p][q]){MAX=arr[p][q];}}
            for(k=0;k<n;k++){
                if(MAX==arr[p][k]){
                    int num = 1;
                    for(j=0;j<n;j++){
                        if(MAX>arr[j][k]){
                            num = 0;
                        }}
                        if(num){printf("%d %d",p,k);return 0;}
                    }
                }
            }
    printf("NONE");
    return 0;
}