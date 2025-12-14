#include <stdio.h>
#define PI 3.141592653589793

long double sqrt_newton(long double x) {
    long double y = x;
    for(int i = 0; i < 50; i++) {
        y = 0.5 * (y + x / y);
    }
    return y;
}


typedef struct{
    double real;
    double imag;
} Complex;

typedef struct{
    long double real;
    long double imag;
} longComplex;

typedef struct {
    double x;
    double y;
} Vector2;

typedef struct{
    double x;
    double y;
    double z;
} Vector3;

typedef struct{
    long double x;
    long double y;
} longVector2;

typedef struct{
    long double x;
    long double y;
    long double z;
} longVector3;

typedef struct{
    int x;
    int y;
} iVector2;

typedef struct{
    int x;
    int y;
    int z;
} iVector3;


double c_mod(Complex c1){
    return (double){
        sqrt_newton(c1.real * c1.real + c1.imag * c1.imag)
    };
}

double c_arg(Complex c1){} // TODO : Finish this shit

Complex c_conj(Complex c1){
    return (Complex){
        c1.real,
        -c1.imag
    };
}

Complex c_square(Complex c1){
    return (Complex){
        (c1.real * c1.real) - (c1.imag * c1.imag),
        2 * c1.real * c1.imag
    };
}

Complex c_add(Complex c1, Complex c2){
    return (Complex){
        c1.real + c2.real,
        c1.imag + c2.imag
    };
}

Complex c_sub(Complex c1, Complex c2){
    return (Complex){
        c1.real - c2.real,
        c1.imag - c2.imag
    };
}

Complex c_mult(Complex c1, Complex c2){
    return (Complex){
        (c1.real*c2.real) - (c1.imag*c2.imag),
        (c1.imag*c2.real) + (c1.real*c2.imag)
    };
}

Complex c_divi(Complex c1, Complex c2){
    return (Complex){
        ((c1.real * c2.real) + (c1.imag * c2.imag))/(c2.real * c2.real + c2.imag * c2.imag),
        ((c1.imag * c2.real) - (c1.real * c2.imag))/(c2.real * c2.real + c2.imag * c2.imag)
    };
}


long double lc_mod(longComplex c1){
    return (long double){
        sqrt_newton(c1.real * c1.real + c1.imag * c1.imag)
    };
}

long double lc_arg(longComplex c1){} // TODO : Finish this shit

longComplex lc_conj(longComplex c1){
    return (longComplex){
        c1.real,
        -c1.imag
    };
}

longComplex lc_square(longComplex c1){
    return (longComplex){
        (c1.real * c1.real) - (c1.imag * c1.imag),
        2 * c1.real * c1.imag
    };
}

longComplex lc_add(longComplex c1, longComplex c2){
    return (longComplex){
        c1.real + c2.real,
        c1.imag + c2.imag
    };
}

longComplex lc_sub(longComplex c1, longComplex c2){
    return (longComplex){
        c1.real - c2.real,
        c1.imag - c2.imag
    };
}

longComplex lc_mult(longComplex c1, longComplex c2){
    return (longComplex){
        (c1.real*c2.real) - (c1.imag*c2.imag),
        (c1.imag*c2.real) + (c1.real*c2.imag)
    };
}

longComplex lc_divi(longComplex c1, longComplex c2){
    return (longComplex){
        ((c1.real * c2.real) + (c1.imag * c2.imag))/(c2.real * c2.real + c2.imag * c2.imag),
        ((c1.imag * c2.real) - (c1.real * c2.imag))/(c2.real * c2.real + c2.imag * c2.imag)
    };
}



int main(){
    Complex a = {5,4}; //5+4i
    Complex b = {2,-1};
    /*Complex result = c_square(a);
    printf("%f + %f i", result.real, result.imag);*/
    double result = c_mod(a);
    printf("%f",result);
}
