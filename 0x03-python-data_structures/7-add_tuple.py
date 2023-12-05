#!/usr/bin/python3
def add_tuple(tuple_x=(), tuple_y=()):
    x1, x2, y1, y2 = 0, 0, 0, 0

    len1 = len(tuple_x)
    len2 = len(tuple_y)
    # unpack first tuple
    if len1 >= 2:
        x1 = tuple_x[0]
        x2 = tuple_x[1]
    elif len1 == 1:
        x1 = tuple_x[0]
    # unpack second tuple
    if len2 >= 2:
        y1 = tuple_y[0]
        y2 = tuple_y[1]
    elif len2 == 1:
        y1 = tuple_y[0]

    new_tuple = x1 + y1, x2 + y2
    return (new_tuple)
