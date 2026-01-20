import ctypes

class Complex(ctypes.Structure):
    _fields_ = [
        ("real", ctypes.c_double),
        ("imag", ctypes.c_double)
    ]
class longComplex(ctypes.Structure):
    _fields_ = [
        ("real", ctypes.c_longdouble),
        ("imag", ctypes.c_longdouble)
    ]
class Vector2(ctypes.Structure):
    _fields_ = [
        ("x", ctypes.c_double),
        ("y", ctypes.c_double)
    ]
class Vector3(ctypes.Structure):
    _fields_ = [
        ("x", ctypes.c_double),
        ("y", ctypes.c_double),
        ("z", ctypes.c_double)
    ]
class longVector2(ctypes.Structure):
    _fields_ = [
        ("x", ctypes.c_longdouble),
        ("y", ctypes.c_longdouble)
    ]
class longVector3(ctypes.Structure):
    _fields_ = [
        ("x", ctypes.c_longdouble),
        ("y", ctypes.c_longdouble),
        ("z", ctypes.c_longdouble)
    ]