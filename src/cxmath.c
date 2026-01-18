#include <math.h>

#define PI 3.141592653589793

#define c_mod(a) _Generic((a), Complex: complex_mod, longComplex: long_complex_mod )(a)
#define c_arg(a) _Generic((a), Complex: complex_arg, longComplex: long_complex_arg )(a)
#define c_conj(a) _Generic((a), Complex: complex_conj, longComplex: long_complex_conj )(a)
#define c_square(a) _Generic((a), Complex: complex_square, longComplex: long_complex_square )(a)
#define c_add(a, b) _Generic((a), Complex: complex_add, longComplex: long_complex_add )(a, b)
#define c_sub(a, b) _Generic((a), Complex: complex_sub, longComplex: long_complex_sub )(a, b)
#define c_mult(a, b) _Generic((a), Complex: complex_mult, longComplex: long_complex_mult )(a, b)
#define c_divi(a, b) _Generic((a), Complex: complex_divi, longComplex: long_complex_divi )(a, b)

#define v_norm(a) _Generic((a), Vector2: vector2_norm, longVector2: long_vector2_norm, Vector3: vector3_norm, longVector3: long_vector3_norm)(a)
#define v_dot(a, b) _Generic((a), Vector2: vector2_dot, longVector2: long_vector2_dot, Vector3: vector3_dot, longVector3: long_vector3_dot)(a, b)
#define v_add(a, b) _Generic((a), Vector2: vector2_add, longVector2: long_vector2_add, Vector3: vector3_add, longVector3: long_vector3_add)(a, b)
#define v_sub(a, b) _Generic((a), Vector2: vector2_sub, longVector2: long_vector2_sub, Vector3: vector3_sub, longVector3: long_vector3_sub)(a, b)
#define v_scale(a, b) _Generic((a), Vector2: vector2_scale, longVector2: long_vector2_scale, Vector3: vector3_scale, longVector3: long_vector3_scale)(a, b)
#define v_prod(a, b) _Generic((a), Vector2: vector2_dot, longVector2: long_vector2_dot, Vector3: vector3_prod, longVector3: long_vector3_prod)(a, b)


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


double complex_mod(Complex c1){
    return (double){
        sqrt_newton(c1.real * c1.real + c1.imag * c1.imag)
    };
}

double complex_arg(Complex c1){
    return (double){
        atan2(c1.imag, c1.real)
    };
}

Complex complex_conj(Complex c1){
    return (Complex){
        c1.real,
        -c1.imag
    };
}

Complex complex_square(Complex c1){
    return (Complex){
        (c1.real * c1.real) - (c1.imag * c1.imag),
        2 * c1.real * c1.imag
    };
}

Complex complex_add(Complex c1, Complex c2){
    return (Complex){
        c1.real + c2.real,
        c1.imag + c2.imag
    };
}

Complex complex_sub(Complex c1, Complex c2){
    return (Complex){
        c1.real - c2.real,
        c1.imag - c2.imag
    };
}

Complex complex_mult(Complex c1, Complex c2){
    return (Complex){
        (c1.real*c2.real) - (c1.imag*c2.imag),
        (c1.imag*c2.real) + (c1.real*c2.imag)
    };
}

Complex complex_divi(Complex c1, Complex c2){
    return (Complex){
        ((c1.real * c2.real) + (c1.imag * c2.imag))/(c2.real * c2.real + c2.imag * c2.imag),
        ((c1.imag * c2.real) - (c1.real * c2.imag))/(c2.real * c2.real + c2.imag * c2.imag)
    };
}


long double long_complex_mod(longComplex c1){
    return (long double){
        sqrt_newton(c1.real * c1.real + c1.imag * c1.imag)
    };
}

long double long_complex_arg(longComplex c1){
    return (long double){
        atan2(c1.imag, c1.real)
    };
}

longComplex long_complex_conj(longComplex c1){
    return (longComplex){
        c1.real,
        -c1.imag
    };
}

longComplex long_complex_square(longComplex c1){
    return (longComplex){
        (c1.real * c1.real) - (c1.imag * c1.imag),
        2 * c1.real * c1.imag
    };
}

longComplex long_complex_add(longComplex c1, longComplex c2){
    return (longComplex){
        c1.real + c2.real,
        c1.imag + c2.imag
    };
}

longComplex long_complex_sub(longComplex c1, longComplex c2){
    return (longComplex){
        c1.real - c2.real,
        c1.imag - c2.imag
    };
}

longComplex long_complex_mult(longComplex c1, longComplex c2){
    return (longComplex){
        (c1.real*c2.real) - (c1.imag*c2.imag),
        (c1.imag*c2.real) + (c1.real*c2.imag)
    };
}

longComplex long_complex_divi(longComplex c1, longComplex c2){
    return (longComplex){
        ((c1.real * c2.real) + (c1.imag * c2.imag))/(c2.real * c2.real + c2.imag * c2.imag),
        ((c1.imag * c2.real) - (c1.real * c2.imag))/(c2.real * c2.real + c2.imag * c2.imag)
    };
}


double vector2_norm(Vector2 u){
    return (double){
        sqrt_newton((u.x * u.x) + (u.y * u.y))
    };
}

double vector2_dot(Vector2 u, Vector2 v){
    return (double){
        (u.x * v.x) + (u.y * v.y)
    };
}

Vector2 vector2_add(Vector2 u, Vector2 v){
    return (Vector2){
        u.x + v.x,
        u.y + v.y
    };
}

Vector2 vector2_sub(Vector2 u, Vector2 v){
    return (Vector2){
        u.x - v.x,
        u.y - v.y
    };
}

Vector2 vector2_scale(Vector2 u, double k){
    return (Vector2){
        u.x * k,
        u.y * k
    };
}


long double long_vector2_norm(longVector2 u){
    return (long double){
        sqrt_newton((u.x * u.x) + (u.y * u.y))
    };
}

long double long_vector2_dot(longVector2 u, longVector2 v){
    return (long double){
        (u.x * v.x) + (u.y * v.y)
    };
}

longVector2 long_vector2_add(longVector2 u, longVector2 v){
    return (longVector2){
        u.x + v.x,
        u.y + v.y
    };
}

longVector2 long_vector2_sub(longVector2 u, longVector2 v){
    return (longVector2){
        u.x - v.x,
        u.y - v.y
    };
}

longVector2 long_vector2_scale(longVector2 u, long double k){
    return (longVector2){
        u.x * k,
        u.y * k
    };
}


double vector3_norm(Vector3 u){
    return (double){
        sqrt_newton((u.x * u.x) + (u.y * u.y) + (u.z * u.z))
    };
}

double vector3_dot(Vector3 u, Vector3 v){
    return (double){
        (u.x * v.x) + (u.y * v.y) + (u.z * v.z)
    };
}

Vector3 vector3_add(Vector3 u, Vector3 v){
    return (Vector3){
        u.x + v.x,
        u.y + v.y,
        u.z + v.z
    };
}

Vector3 vector3_sub(Vector3 u, Vector3 v){
    return (Vector3){
        u.x - v.x,
        u.y - v.y,
        u.z - v.z
    };
}

Vector3 vector3_prod(Vector3 u, Vector3 v){
    return (Vector3){
        (u.y * v.z) - (u.z * v.y),
        (u.z * v.x) - (u.x * v.z),
        (u.x * v.y) - (u.y * v.x)
    };
}

Vector3 vector3_scale(Vector3 u, double k){
    return (Vector3){
        u.x * k,
        u.y * k,
        u.z * k
    };
}


long double long_vector3_norm(longVector3 u){
    return (long double){
        sqrt_newton((u.x * u.x) + (u.y * u.y) + (u.z * u.z))
    };
}

long double long_vector3_dot(longVector3 u, longVector3 v){
    return (long double){
        (u.x * v.x) + (u.y * v.y) + (u.z * v.z)
    };
}

longVector3 long_vector3_add(longVector3 u, longVector3 v){
    return (longVector3){
        u.x + v.x,
        u.y + v.y,
        u.z + v.z
    };
}

longVector3 long_vector3_sub(longVector3 u, longVector3 v){
    return (longVector3){
        u.x - v.x,
        u.y - v.y,
        u.z - v.z
    };
}

longVector3 long_vector3_prod(longVector3 u, longVector3 v){
    return (longVector3){
        (u.y * v.z) - (u.z * v.y),
        (u.z * v.x) - (u.x * v.z),
        (u.x * v.y) - (u.y * v.x)
    };
}

longVector3 long_vector3_scale(longVector3 u, long double k){
    return (longVector3){
        u.x * k,
        u.y * k,
        u.z * k
    };
}
