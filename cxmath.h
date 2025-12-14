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


double v_norm(Vector2 u){
    return (double){
        sqrt_newton((u.x * u.x) + (u.y * u.y))
    };
}

double v_dot(Vector2 u, Vector2 v){
    return (double){
        (u.x * v.x) + (u.y * v.y)
    };
}

Vector2 v_add(Vector2 u, Vector2 v){
    return (Vector2){
        u.x + v.x,
        u.y + v.y
    };
}

Vector2 v_sub(Vector2 u, Vector2 v){
    return (Vector2){
        u.x - v.x,
        u.y - v.y
    };
}

Vector2 v_scale(Vector2 u, double k){
    return (Vector2){
        u.x * k,
        u.y * k
    };
}


long double lv_norm(longVector2 u){
    return (long double){
        sqrt_newton((u.x * u.x) + (u.y * u.y))
    };
}

long double lv_dot(longVector2 u, longVector2 v){
    return (long double){
        (u.x * v.x) + (u.y * v.y)
    };
}

longVector2 lv_add(longVector2 u, longVector2 v){
    return (longVector2){
        u.x + v.x,
        u.y + v.y
    };
}

longVector2 lv_sub(longVector2 u, longVector2 v){
    return (longVector2){
        u.x - v.x,
        u.y - v.y
    };
}

longVector2 lv_scale(longVector2 u, long double k){
    return (longVector2){
        u.x * k,
        u.y * k
    };
}


double v3_norm(Vector3 u){
    return (double){
        sqrt_newton((u.x * u.x) + (u.y * u.y) + (u.z * u.z))
    };
}

double v3_dot(Vector3 u, Vector3 v){
    return (double){
        (u.x * v.x) + (u.y * v.y) + (u.z * v.z)
    };
}

Vector3 v3_add(Vector3 u, Vector3 v){
    return (Vector3){
        u.x + v.x,
        u.y + v.y,
        u.z + v.z
    };
}

Vector3 v3_sub(Vector3 u, Vector3 v){
    return (Vector3){
        u.x - v.x,
        u.y - v.y,
        u.z - v.z
    };
}

Vector3 v3_prod(Vector3 u, Vector3 v){
    return (Vector3){
        (u.y * v.z) - (u.z * v.y),
        (u.z * v.x) - (u.x * v.z),
        (u.x * v.y) - (u.y * v.x)
    };
}

Vector3 v3_scale(Vector3 u, double k){
    return (Vector3){
        u.x * k,
        u.y * k,
        u.z * k
    };
}


long double lv3_norm(longVector3 u){
    return (long double){
        sqrt_newton((u.x * u.x) + (u.y * u.y) + (u.z * u.z))
    };
}

long double lv3_dot(longVector3 u, longVector3 v){
    return (long double){
        (u.x * v.x) + (u.y * v.y) + (u.z * v.z)
    };
}

longVector3 lv3_add(longVector3 u, longVector3 v){
    return (longVector3){
        u.x + v.x,
        u.y + v.y,
        u.z + v.z
    };
}

longVector3 lv3_sub(longVector3 u, longVector3 v){
    return (longVector3){
        u.x - v.x,
        u.y - v.y,
        u.z - v.z
    };
}

longVector3 lv3_prod(longVector3 u, longVector3 v){
    return (longVector3){
        (u.y * v.z) - (u.z * v.y),
        (u.z * v.x) - (u.x * v.z),
        (u.x * v.y) - (u.y * v.x)
    };
}

longVector3 lv3_scale(longVector3 u, long double k){
    return (longVector3){
        u.x * k,
        u.y * k,
        u.z * k
    };
}
