#include <stdio.h>
#include <Python.h>

// Module method definitions
static PyObject* hello_world(PyObject *self, PyObject *args) {
    printf("Hello, world!\n");
    Py_RETURN_NONE;
}

static PyMethodDef hello_methods[] = { 
    {   
        "hello_world", hello_world, METH_NOARGS,
        "Print 'hello world'"
    },  
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef hello_definition = { 
    PyModuleDef_HEAD_INIT,
    "hello",
    "",
    -1, 
    hello_methods
};

PyMODINIT_FUNC PyInit_hello(void) {
    Py_Initialize();
    return PyModule_Create(&hello_definition);
}
