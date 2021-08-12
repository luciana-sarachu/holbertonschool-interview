#!/usr/bin/python3
"""In a text file, there is a single character H.
Your text editor can execute only two operations in this file:
Copy All and Paste."""


def minOperations(n):

    """Given a number n, this method calculates the fewest number of
    operations needed to result in exactly n H characters in the file."""

    copyPaste = 2
    onlyPaste = 1
    numberOfOperations = 0
    totalH = n

    if n < 1:
        return 0

    while totalH > 1:
        if totalH % 2 == 0:
            numberOfOperations = numberOfOperations + copyPaste
        else:
            numberOfOperations += onlyPaste
    return numberOfOperations
