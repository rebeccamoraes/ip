    #include<stdio.h>
    int main(){
        float a,b,c,m;
        scanf("%f %f %f", &a,&b,&c);
        m=(a+b+c)/3;
        printf("MEDIA = %.2f\n", truncf(m*1000.00)/1000.00);
        if(m>=6){
            printf("APROVADO");
        }else{
            printf("REPROVADO");
        }
     
        return 0;
    }
