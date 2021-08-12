#!/usr/bin/python3
"""In a text file, there is a single character H.
Your text editor can execute only two operations in this file:
Copy All and Paste."""


def minOperations(n):

    """Given a number n, this method calculates the fewest number of
    operations needed to result in exactly n H characters in the file."""

    totalH = n
    copyPaste = 2
    numberOfOperations = 0

    if n <= 1:
        return 0

    while totalH > 1:
        if totalH % 2 == 0:
            totalH = totalH / copyPaste
            numberOfOperations = numberOfOperations + copyPaste
        else:
            copyPaste += 1
    return numberOfOperations
