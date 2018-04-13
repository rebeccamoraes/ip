#include<stdio.h>
#define SALMIN 937.00
int main(){
    float rbf;//renda bruta familiar
    int qtdf, em, etnia;//qtd de pessoas na familia, tipo de escola do em e etnia
    //etnia 1 – preto; 2 – pardo; 3 – indígena; 4 – branco
    //em 1 - particular; 2 - pública
    scanf("%f %d %d %d", &rbf, &qtdf, &em, &etnia);
    if(em==1){
        printf("ALUNO NAO COTISTA");
    }else if(em==2){
        if(rbf/qtdf <= SALMIN*1.5){
          (etnia!=4)?printf("ALUNO COTISTA (L2)"):printf("ALUNO COTISTA (L1)");
        }else{
            (etnia!=4)?printf("ALUNO COTISTA (L4)"):printf("ALUNO COTISTA (L3)");
        }
    }
    return 0;
}
