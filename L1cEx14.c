    #include<stdio.h>
    int main(){
        int n,i,j,cont=1;
        scanf("%d",&n);
        if(n<2){
            printf("Campeonato invalido!\n");
        }else{
            for(i=1;i<=n;i++){
                for(j=2;j<=n;j++){
                    if(!(j==i || j<i)){
                        printf("Final %d: Time%d X Time%d\n",cont,i,j);
                        cont++;
                    }
                }
            }
        }
        return 0;
    }
