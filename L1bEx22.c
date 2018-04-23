    #include<stdio.h>
    #include<math.h>
    int main(){
        float j,a,b,c,aux,i;
        scanf("%f %f %f %f",&j,&a,&b,&c);
        for(i=0;i<3;i++){
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
        }
        if(j==1){
            printf("%.2f %.2f %.2f\n", truncf(a*100.0)/100.0,truncf(b*100.0)/100.0,truncf(c*100.0)/100);    
        }else if(j==2){
            printf("%.2f %.2f %.2f\n", truncf(c*100.0)/100.0,truncf(b*100.0)/100.0,truncf(a*100.0)/100);
        }else{
            printf("%.2f %.2f %.2f\n", truncf(b*100.0)/100.0,truncf(c*100.0)/100.0,truncf(a*100.0)/100);
        }
        
        return 0;
    }
