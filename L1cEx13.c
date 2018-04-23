    #include<stdio.h>
    int main(){
        int n;
        float timpar=0,tpar=0,qtdi=0, qtdp=0;
        scanf("%d",&n);
        while(n!=0){
            if(n%2==0){
                qtdp++;
                tpar+=n;
            }else{
                qtdi++;
                timpar+=n;
            }
            scanf("%d",&n);
     
        }
        if(qtdi==0)qtdi=1;
        if(qtdp==0)qtdp=1;
     
        printf("MEDIA PAR: %.2f\n", truncf((tpar/qtdp)*100.0)/100.0);
        printf("MEDIA IMPAR: %.2f\n", truncf((timpar/qtdi)*100.0)/100.0);
    }
