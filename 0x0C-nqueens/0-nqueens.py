#!/usr/bin/python3
""" https://www.123ajedrez.com/actividades-2/problema-de-las-8-damas
https://es.wikipedia.org/wiki/Problema_de_las_ocho_reinas, other alternative:
https://es.stackoverflow.com/questions/171895/
solucion-reto-de-las-8-reinas-en-python """
from sys import argv


if __name__ == "__main__":
    if len(argv) != 2:
        print("Usage: nqueens N\n")
        exit(1)

    N = argv[1]
    if type(N) is not int:
        print("N must be a number\n")
        exit(1)

    if N <= 4:
        print("N must be at least 4\n")
        exit(1)

    solution = []


    def nqueens(N):
            """ The program should print every possible solution to the problem"""
