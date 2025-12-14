**Complex Extended Math**  is a C library that allow you to simplify calculations with vectors and complex numbers

The development of CXmath is driven by user feedback. Please report any issue or bug.

Pyxel is open source under the [MIT License](LICENSE) and free to use.

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

---

## longComplex

Represents a complex number using `long double` precision for higher accuracy.

```c
typedef struct {
    long double real;
    long double imag;
} longComplex;
```

---

## Vector2

Represents a 2D vector using `double` precision.

```c
typedef struct {
    double x;
    double y;
} Vector2;
```

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

---

## longVector2

Represents a 2D vector using `long double` precision.

```c
typedef struct {
    long double x;
    long double y;
} longVector2;
```

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

---

## iVector2

Represents a 2D vector using integer values.

```c
typedef struct {
    int x;
    int y;
} iVector2;
```

---

## iVector3

Represents a 3D vector using integer values.

```c
typedef struct {
    int x;
    int y;
    int z;
} iVector3;
```
