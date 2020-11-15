#include <stdio.h>
#include <malloc.h>

int main()
{
    int n,i,j,p;
    scanf("%d",&n);
    int *array=(int*)calloc(n,sizeof(int));
    for(i=0;i<=n-1;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<=n-2;i++){
        p=i;
        for(j=i+1;j<n;j++){
            if(array[p]>=array[j])p=j;
        }
        if(i!=p){
        array[i]=array[p]+array[i];
        array[p]=array[i]-array[p];
        array[i]=array[i]-array[p];}
    }
    for(i=0;i<n-1;i++){
        printf("%d ",array[i]);
    }
    printf("%d",array[n-1]);
    free(array);
    return 0;
}
