    #include<stdio.h>
    int main(){
        int num, num2, d1, d2, d3, d4,d5, a;
        scanf("%d", &num);
        a=num;
        //printf("%b", num>99999);
        if(num>99999){
            printf("NUMERO INVALIDO");
        }else{
            if(num>9999){
                d1=truncf(num/10000);
                num-=d1*10000;
                d2=truncf(num/1000);
                num-=d2*1000;
                d3=truncf(num/100);
                num-=d3*100;
                d4=truncf(num/10);
                d5= num-(d4*10);
                num2=d5*10000+d4*1000+d3*100+d2*10+d1;
            }else if(num>999){
                d1=truncf(num/1000);
                num-=d1*1000;
                d2=truncf(num/100);
                num-=d2*100;
                d3=truncf(num/10);
                d4= num-(d3*10);
                num2=d4*1000+d3*100+d2*10+d1;
            }else if(num>99){
                d1=truncf(num/100);
                num-=d1*100;
                d2=truncf(num/10);
                d3= num-(d2*10);
                num2=d3*100+d2*10+d1;
            }else if(num>9){
                d1=truncf(num/10);
                d2= num-(d1*10);
                num2=d2*10+d1;
            }else{
                printf("PALINDROMO");
                return 0;
            }
            if(a==num2){
                printf("PALINDROMO");
            }else{
                printf("NAO PALINDROMO");
            }
        }
        return 0;
    }
