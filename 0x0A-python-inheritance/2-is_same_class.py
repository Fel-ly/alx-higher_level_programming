#!/usr/bin/python3
"""Defines a class-checking function."""


def is_same_class(obj, a_class):
    """Check if an object is an exact instance of a given class.

    Args:
        obj (any): object to be checked
        a_class (type): The class to match the type of obj to be checked
    Returns:
        true if obj is exactly an instance of a_class
        Otherwise - False.
    """
    if type(obj) == a_class:
        return True
    return False
