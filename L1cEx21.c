    #include<stdio.h>
    int main(){
        int n,i, a,b,a1,a2,a3;
        scanf("%d",&n);
        int maiores[n];
        for(i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            a3=a%10;
            a/=10;
            a2=a%10;
            a1=a/10;
            a=a3*100+a2*10+a1;
            a3=b%10;
            b/=10;
            a2=b%10;
            a1=b/10;
            b=a3*100+a2*10+a1;
            if(a > b)
            maiores[i]=a;
            else
            maiores[i]=b;
        }
        for(i=0;i<n;i++){
            printf("%d\n",maiores[i]);
        }
        return 0;
    }
