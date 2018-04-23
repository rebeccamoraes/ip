    #include<stdio.h>
    int main(){
        int x,y,i;
        scanf("%d %d",&x,&y);
        if(x%2==0){
            for(i=x;i<(x+y*2);i+=2){
                printf("%d ",i);
            }
            printf("\n");
        }else{
            printf("O PRIMEIRO NUMERO NAO E PAR\n");
        }
        return 0;
    }
