    #include <stdio.h>
    #include <math.h>
    int main(){
        float a,b,c;
        int c1, c2, c3;
        scanf("%f %f %f", &a, &b, &c);
        c1=(a>(unsigned)b-c)&&(a<(b+c));
        c2=(b>(unsigned)a-c)&&(b<(a+c));
        c3=(c>(unsigned)a-b)&&(c<(a+b));
        if(c1&&c2&&c3){
            //é triangulo
            printf("Perimetro = %.1f\n", truncf((a+b+c)*10.0)/10.0);
        }else{
            float area=((a+b)*c)/2;
            printf("Area = %.1f\n", truncf((area)*10.0)/10.0);
        }
        
        return 0;
    }
