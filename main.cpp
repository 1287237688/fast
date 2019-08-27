#include<stdio.h>
int main(){
    int i=0,j=0;
    int a[5];
    int t=0;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        for(j=i;j<5;j++){
            if(a[j]>a[i]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

