#include <stdio.h>
#include <stdlib.h>
#include <Python.h>

/**
 * print_python_list_info - Prints info about a python list
 * @p:Object to be checked
 */
void print_python_list_info(PyObject *p)
{
	int j;

	printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);

	for (j = 0; j < Py_SIZE(p); j++)
		printf("Element %d: %s\n", j,
		       Py_TYPE(PyList_GetItem(p, j))->tp_name);
}
