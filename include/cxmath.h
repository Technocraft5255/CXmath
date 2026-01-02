#ifndef CXMATH_H
#define CXMATH_H

#ifdef _WIN32
  #ifdef CXMATH_EXPORTS
    #define CXMATH_API __declspec(dllexport)
  #else
    #define CXMATH_API __declspec(dllimport)
  #endif
#else
  #define CXMATH_API
#endif

long double sqrt_newton(long double x);

typedef struct{double real;double imag;} Complex;
typedef struct{long double real;long double imag;} longComplex;
typedef struct {double x;double y;} Vector2;
typedef struct{double x;double y;double z;} Vector3;
typedef struct{long double x;long double y;} longVector2;
typedef struct{long double x;long double y;long double z;} longVector3;

double c_mod(Complex c1);
double c_arg(Complex c1);
Complex c_conj(Complex c1);
Complex c_square(Complex c1);
Complex c_add(Complex c1,Complex c2);
Complex c_sub(Complex c1,Complex c2);
Complex c_mult(Complex c1,Complex c2);
Complex c_divi(Complex c1,Complex c2);

long double lc_mod(longComplex c1);
long double lc_arg(longComplex c1);
longComplex lc_conj(longComplex c1);
longComplex lc_are(longComplex c1);
longComplex lc_add(longComplex c1, longComplex c2);
longComplex lc_sub(longComplex c1, longComplex c2);
longComplex lc_mult(longComplex c1, longComplex c2);
longComplex lc_divi(longComplex c1, longComplex c2);

double v_norm(Vector2 u);
double v_dot(Vector2 u,Vector2 v);
Vector2 v_add(Vector2 u,Vector2 v);
Vector2 v_sub(Vector2 u,Vector2 v);
Vector2 v_scale(Vector2 u,double k);

long double lv_norm(longVector2 u);
long double lv_dot(longVector2 u,longVector2 v);
longVector2 lv_add(longVector2 u,longVector2 v);
longVector2 lv_sub(longVector2 u,longVector2 v);
longVector2 lv_scale(longVector2 u,long double k);

double v3_norm(Vector3 u);
double v3_dot(Vector3 u,Vector3 v);
Vector3 v3_add(Vector3 u,Vector3 v);
Vector3 v3_sub(Vector3 u,Vector3 v);
Vector3 v3_prod(Vector3 u,Vector3 v);
Vector3 v3_scale(Vector3 u,double k);

long double lv3_norm(longVector3 u);
long double lv3_dot(longVector3 u,longVector3 v);
longVector3 lv3_add(longVector3 u,longVector3 v);
longVector3 lv3_sub(longVector3 u,longVector3 v);
longVector3 lv3_prod(longVector3 u,longVector3 v);
longVector3 lv3_scale(longVector3 u,long double k);
#endif