#!/usr/bin/python3
""" Module that solves the N queens problem """


import sys


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        sys.exit(1)

    try:
        N = int(sys.argv[1])
    except ValueError:
        print("N must be a number")
        sys.exit(1)

    if N < 4:
        print("N must be at least 4")
        sys.exit(1)


def bTracking(N, i=0, a=[], b=[], c=[]):
    """Generates backtracking of the answers of the puzzle """
    if i < N:
        for j in range(N):
            if j not in a and i+j not in b and i-j not in c:
                for ans in bTracking(N, i+1, a+[j], b+[i+j], c+[i-j]):
                    yield ans  # iterator of the solutions
    else:
        yield a  # iterator of the first list with no answer


for ans in bTracking(N):
    resp = [[col, row] for col, row in enumerate(ans)]
    print(resp)
