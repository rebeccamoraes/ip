        #include<stdio.h>
        #include<math.h>
        int main(){
            int conta;
            float consumo,valor;
            char tipo;
            scanf("%d %f", &conta, &consumo);
            scanf(" %c",&tipo);
            switch(tipo){
                case 'C':
                    valor=500;
                    if(consumo>80)valor+=((consumo-80)*0.25);
                    break;
                case 'I':
                    valor=800;
                    if(consumo>100)valor+=((consumo-100)*0.04);
                    break;
                case 'R':
                    valor=(consumo*0.05)+5;
                    break;
            }
            printf("CONTA = %d\nVALOR DA CONTA =%.2f", conta, truncf(valor*100.0)/100.0);
            return 0;
        }
