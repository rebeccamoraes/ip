    #include<stdio.h>
    int main(){
        int i,n,total;
        float qtdp,qtdg,qtda,qtdc;
        scanf("%d", &n);
        float renda[n];
        for(i=0;i<n;i++){
            scanf("%d %f %f %f %f", &total, &qtdp, &qtdg, &qtda, &qtdc);
            renda[i]=(qtdp/100.0)*total;
            renda[i]+=(qtdg/100.0)*total*5.0;
            renda[i]+=(qtda/100.0)*total*10.0;
            renda[i]+=(qtdc/100.0)*total*20.0;
        }
        for(i=0;i<n;i++){
            printf("A RENDA DO JOGO N.%d E = %.2f\n", i+1,truncf(renda[i]*100.0)/100.0);
        }
        return 0;
    }
