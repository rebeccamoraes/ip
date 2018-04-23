    #include<stdio.h>
    int main(){
        int i,n;
        scanf("%d",&n);
        int total=n;
        for(i=2;i<=64;i++){
            if(i%2==0){
                //branco
                total+=n;
            }else{
                //preto
                total+=(n*2);
            }
        }
        printf("%d",total);
        return 0;
    }
