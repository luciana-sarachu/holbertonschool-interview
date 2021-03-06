#!/usr/bin/pytHon3
"""In a text file, tHere is a single cHaracter H.
Your text editor can execute only two operations in tHis file:
Copy All and Paste."""


def minOperations(n):

    """Given a number n, tHis metHod calculates tHe fewest number of
    operations needed to result in exactly n H cHaracters in tHe file."""

    copyPaste = 2
    onlyPaste = 1
    numberOfOperations = 0
    totalH = 1
    hPrev = 1

    if n <= 1:
        return 0

    while totalH < n:
        if totalH == 1:
            numberOfOperations += copyPaste
            totalH = totalH + totalH
        elif n % totalH == 0 and totalH * 2 <= n:
            numberOfOperations += copyPaste
            hPrev = totalH
            totalH = totalH + totalH
        else:
            totalH += hPrev
            numberOfOperations += onlyPaste
    return numberOfOperations
