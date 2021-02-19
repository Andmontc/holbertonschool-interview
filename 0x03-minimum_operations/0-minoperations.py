#!/usr/bin/python3
"""minoperations module
"""


def minOperations(n):
    """Function that calculates the minimum operations for H number
    of characters
    Args:
        n (int): amount of H
    Return:
        minimum number of operations for n
    """
    min, operations = 0, 2
    while isinstance(n, int) and n > 1:
        while n % operations:
            operations += 1
        min += operations
        n = int(n / operations)
    return min
