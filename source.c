#include <stdio.h>
#include <math.h>

double fx(int x, double a, double b){
    return (a * x) + b;
}

int main(){
    int size, iX;

    printf("[INPUT] DATA COUNT : ");
    scanf("%d", &size); // 독립 변수와 종속변수의 데이터 갯수

    double x[size]; // 독립변수
    double y[size]; // 종속변수

    printf("\nPlease enter the data of the independent variable.\n");
    for(int i = 0; i < size; i++){
            double data;
            printf("- ");
            scanf("%lf", &data);
            printf("\n");
            x[i] = data;
    }

    printf("\nPlease enter the data of the dependent variable.\n");

    for(int i = 0; i < size; i++){
            double data;
            printf("- ");
            scanf("%lf", &data);
            printf("\n");
            y[i] = data;
    }

    double pX = 0, pY = 0, a = 0, b =0, aa = 0; // aa => a의 분모

    for(int i = 0; i < size; i++){
        pX += x[i];
        pY += y[i];

    }

    pX /= size; pY /= size;

    for(int i = 0; i < size; i++){
        a += (y[i] - pY) * (x[i] - pX);
        aa += pow(x[i] - pX, 2);
    }

    a /= aa;
    b = pY - (a * pX) ;

    printf("Please write the value of x\n- ");
    scanf("%d", &iX);

    printf("\n%fx + %f = %f", a, b, fx(iX, a, b));


    return 0;
}
