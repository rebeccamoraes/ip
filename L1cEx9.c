    #include<stdio.h>
    int main(){
        int n,i,fat=1;
        scanf("%d",&n);
        for(i=2;i<=n;i++){
            fat*=i;
        }
        printf("%d! = %d\n", n,fat);
        return 0;
    }
