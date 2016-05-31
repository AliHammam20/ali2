#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265

double add(double a,double b){
    return a+b;
}
double sub(double a,double b){
    return a-b;
}
double multiply(double a,double b){
    return a*b;
}
double devide(double a,double b){
    return a/b;
}


int main(){
    // a1 ==> first operand, b1 ==> second , c1, =operand=> operator
    double a1, b1, c1;
    int a = 0;
    while(a!=-1) {
        scanf("%lf %lf %lf", &a1, &b1, &c1);
        if(c1 == 0){
            printf("%lf\n", add(a1,b1));
        }else if(c1 == 1){
            printf("%lf\n", sub(a1,b1));
        }else if(c1 == 2){
            printf("%lf\n", multiply(a1,b1));
        }else if(c1 == 3){
            printf("%lf\n", devide(a1,b1));
        }else if(c1 == 4){
            b1=sin(a1 * (PI / 180.0));
            printf("The sine of %lf is %lf degrees\n", a1, b1);
        }else if(c1 == 5){
                printf("%lf\n", pow(a1, b1));
        }else if(c1 == 6){
            b1 = cos(a1 * PI / 180.0 );
            printf("the sine of %lf is %lf degrees\n", a1, b1);
        }else if(c1 == 7){
            if(cos(a1 * PI / 180.0) > 0.0000001){
                printf("the tan of %lf is %lf degrees\n", a1, (sin(a1 * PI / 180.0)/cos(a1 * PI / 180.0)));
            }else{
                printf("no tan for this degree");
            }
        }
    }
    return 0;
}


