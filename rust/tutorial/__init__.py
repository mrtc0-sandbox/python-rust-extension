import os
from ._tutorialnative import ffi as _ffi

_lib = _ffi.dlopen(os.path.join(os.path.dirname(__file__), '_tutorial.so'))


def byte2str(name: bytes) -> bytes:
    return _lib.byte2str(name)


def add(a: int, b: int) -> int:
    return _lib.add(a, b)
