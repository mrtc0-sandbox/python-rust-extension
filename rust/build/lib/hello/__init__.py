import os
from ._hellonative import ffi as _ffi

_lib = _ffi.dlopen(os.path.join(os.path.dirname(__file__), '_hello.so'))


def hello(name: bytes) -> bytes:
    return _lib.hello(name)


def add(a: int, b: int) -> int:
    return _lib.add(a, b)
