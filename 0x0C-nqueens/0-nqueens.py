#!/usr/bin/python3
""" https://www.123ajedrez.com/actividades-2/problema-de-las-8-damas
https://es.wikipedia.org/wiki/Problema_de_las_ocho_reinas, other alternative:
https://es.stackoverflow.com/questions/171895/
solucion-reto-de-las-8-reinas-en-python """
from sys import argv, exit


if len(argv) != 2:
    print("Usage: nqueens N")
    exit(1)

N = int(argv[1])
if type(N) != int:
    print("N must be a number")
    exit(1)

if N < 4:
    print("N must be at least 4")
    exit(1)

solution = []


def nqueens(row, N, solution):
    """The program should print any possible solution"""
    if (row == N):
        print(solution)
    else:
        for col in range(N):
            position = [row, col]
            if validposition(solution, position):
                solution.append(position)
                nqueens(row + 1, N, solution)
                solution.remove(position)


def validposition(solution, position):
    """validate horizontal and diagonal position of queens"""
    for queen in solution:
        if queen[1] == position[1]:
            return False
        # descending diagonal
        if (queen[0] - queen[1]) == (position[0] - position[1]):
            return False
        # ascending diagonal
        if (queen[0] + queen[1]) == (position[0] + position[1]):
            return False
    return True

nqueens(0, N, solution)
