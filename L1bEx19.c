    #include<stdio.h>
    #include<math.h>
    int main(){
        float a,b,c,d, aux,i;
        scanf("%f %f %f %f",&a,&b,&c,&d);
        for(i=0;i<4;i++){
            if(a>b){
                aux=a;
                a=b;
                b=aux;
            }
            if(b>c){
                aux=b;
                b=c;
                c=aux;
            }
            if(c>d){
                aux=c;
                c=d;
                d=aux;
            }
        }
        printf("%.2f, %.2f, %.2f, %.2f\n", truncf(a*100.0)/100.0,truncf(b*100.0)/100.0,truncf(c*100.0)/100.0,truncf(d*100.0)/100.0);
        return 0;
    }
