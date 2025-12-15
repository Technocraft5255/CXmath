# CXmath
**Complex Extended Math**  is a C library that allow you to simplify calculations with vectors and complex numbers

The development of CXmath is driven by user feedback. Please report any issue or bug.

CXmath is open source under the [MIT License](LICENSE) and free to use.

**Created by** : Wayzen, Technocraft, KLB

**Documented by** : Technocraft, Wayzen

# Specifications

- Low memory ressources use
- Written in standard C (C99 or C11)
- 2D and 3D Vector support
- Complex number support
- Portable header library

# How to Install

CXmath is a header-only C library, so installation is simple.

1. Clone the repository

```git
git clone https://github.com/Technocraft5255/CXmath.git
```

2. Include the library in your project

Copy the cxmath.h file into your project directory, or keep it somewhere accessible.

Then include it in your C source files:

```c
#include "cxmath.h"
```

3. Compile your project

Compile your project normally with a C99 or C11 compatible compiler.
No additional dependencies or linking steps are required.

# Documentation

### Table of content
 - [`Complex`](#Complex)
 - [`longComplex`](#longComplex)
 - [`Vector2`](#Vector2)
 - [`Vector3`](#Vector3)
 - [`longVector2`](#longVector2)
 - [`longVector3`](#longVector3)
 - [`iVector2`](#iVector2)
 - [`iVector3`](#iVector3)


## Complex

Represents a complex number using `double` precision.

```c
typedef struct {
    double real;
    double imag;
} Complex;
```

### Methods
- `double c_mod(Complex c)` — returns the modulus of the complex number
- `Complex c_conj(Complex c)` — returns the conjugate of the complex number
- `Complex c_square(Complex c)` — returns the square of the complex number
- `Complex c_add(Complex a, Complex b)` — adds two complex numbers
- `Complex c_sub(Complex a, Complex b)` — subtracts two complex numbers
- `Complex c_mult(Complex a, Complex b)` — multiplies two complex numbers
- `Complex c_divi(Complex a, Complex b)` — divides two complex numbers

---

## longComplex

Represents a complex number using `long double` precision for higher accuracy.

```c
typedef struct {
    long double real;
    long double imag;
} longComplex;
```

### Methods
- `long double lc_mod(Complex c)` — returns the modulus of the long complex number
- `longComplex lc_conj(Complex c)` — returns the conjugate of the long complex number
- `longComplex lc_square(Complex c)` — returns the square of the long complex number
- `longComplex lc_add(Complex a, Complex b)` — adds two long complex numbers
- `longComplex lc_sub(Complex a, Complex b)` — subtracts two long complex numbers
- `longComplex lc_mult(Complex a, Complex b)` — multiplies two long complex numbers
- `longComplex lc_divi(Complex a, Complex b)` — divides two long complex numbers
---

## Vector2

Represents a 2D vector using `double` precision.

```c
typedef struct {
    double x;
    double y;
} Vector2;
```

### Methods
- `double v_norm(Vector2 u)` — returns the norm of a 2D Vector
- `double v_dot(Vector2 u, Vector2 v)` — returns the dot product of two 2D Vectors
- `Vector2 v_add(Vector2 u, Vector2 v)` — adds two 2D Vectors
- `Vector2 v_sub(Vector2 u, Vector2 v)` — subtracts two 2D Vectors
- `Vector2 v_scale(Vector2 u, double k)` — scales a 2D Vector by a real factor
---

## Vector3

Represents a 3D vector using `double` precision.

```c
typedef struct {
    double x;
    double y;
    double z;
} Vector3;
```

### Methods
- `double v3_norm(Vector3 u)` — returns the norm of a 3D Vector
- `double v3_dot(Vector3 u, Vector3 v)` — returns the dot product of two 3D Vectors
- `Vector3 v3_add(Vector3 u, Vector3 v)` — adds two 3D Vectors
- `Vector3 v3_sub(Vector3 u, Vector3 v)` — subtracts two 3D Vectors
- `Vector3 v3_prod(Vector3 u,Vector3 v)` — returns the vectorial product of two 3D Vectors
- `Vector3 v3_scale(Vector3 u, double k)` — scales a 3D Vector by a real factor
---

## longVector2

Represents a 2D vector using `long double` precision.

```c
typedef struct {
    long double x;
    long double y;
} longVector2;
```

### Methods
- `long double lv_norm(longVector2 u)` — returns the norm of a long 2D Vector
- `long double lv_dot(longVector2 u, longVector2 v)` — returns the dot product of two long 2D Vectors
- `longVector2 lv_add(longVector2 u, longVector2 v)` — adds two long 2D Vectors
- `longVector2 lv_sub(longVector2 u, longVector2 v)` — subtracts two long 2D Vectors
- `longVector2 lv_scale(longVector2 u, long double k)` — scales a long 2D Vector by a real factor
---

## longVector3

Represents a 3D vector using `long double` precision.

```c
typedef struct {
    long double x;
    long double y;
    long double z;
} longVector3;
```

### Methods
- `long double lv3_norm(longVector3 u)` — returns the norm of a long 3D Vector
- `long double lv3_dot(longVector3 u, longVector3 v)` — returns the dot product of two long 3D Vectors
- `longVector3 lv3_add(longVector3 u, longVector3 v)` — adds two long 3D Vectors
- `longVector3 lv3_sub(longVector3 u, longVector3 v)` — subtracts two long 3D Vectors
- `longVector3 lv3_prod(longVector3 u,longVector3 v)` — returns the vectorial product of two long 3D Vectors
- `longVector3 lv3_scale(longVector3 u, long double k)` — scales a long 3D Vector by a real factor
---
