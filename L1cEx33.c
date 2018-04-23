    #include<stdio.h>
    int testePrimo(int n){
        int i;
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    int proximoPrimo(int n){
        n++;
        while(!testePrimo(n)){
            n++;
        }
        return n;
    }
    int main(){
        int n,cont=0;
        do{
        scanf("%d",&n);
        if(n<2){
            printf("Fatoracao nao e possivel para o numero %d!", n);
        }else{
            int x=n;
            int primo=proximoPrimo(1);
            printf("%d = ", n);
            while(x>1){
                while(x%primo!=0){
                    primo=proximoPrimo(primo);
                }
                x=x/primo;
                if(cont>0){
                    printf(" x %d", primo);
                }else{
                    printf("%d", primo);
                    cont++;
                }
            }
        }
        printf("\n");
        }while(n<2);
        return 0;
    }
