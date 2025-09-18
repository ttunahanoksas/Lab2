#include <stdio.h>
#include <math.h> 

int main(){
    double a,b,c;
    double discriminant, x1, x2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a==0){
        printf("This is not a quadratic equation");
    }
    discriminant = b*b-4*a*c;
    if (discriminant > 0){
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real roots: x1 = %.4f, x2 = %.4f\n", x1, x2);
    }else if (discriminant==0){
        x1 = -b / (2 * a);
         printf("One real root: x = %.4f\n", x1);
    }
    else{
    
    printf("There is no real root in this equation");
    }
         
    
}
