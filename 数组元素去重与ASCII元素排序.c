#include<stdio.h>
#define MAXN 81
int main(){
    char arr[MAXN];
    int num = 0;
    int count = 0;
    int i,k,p,q;
    while(1){
        char c = getchar();
        if(c=='\n'){break;}
        arr[num] = c;
        num++;
        if(num>79){break;}
    }
    char unique[MAXN];
    for(i=0;i<num;i++){
        int flag = 1;
        for(k=0;k<count;k++){
            if(arr[i]==unique[k]){
                flag = 0;
                break;}
            }
            if(flag){unique[count]=arr[i];count++;}
    }
    for(p=0;p<count-1;p++){
        for(q=0;q<(count-1-p);q++){
            if(unique[q+1]<unique[q]){
                int temp = unique[q+1];
                unique[q+1] = unique[q];
                unique[q] = temp;
            }
        }
    }
    if(count==0){printf("\n");}
    else{unique[count]='\0';printf("%s",unique);}
    return 0;
}