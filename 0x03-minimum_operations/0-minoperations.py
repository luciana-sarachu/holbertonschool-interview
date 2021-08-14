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
    totalH = n

    if n < 1:
        return 0

    while True:
        if totalH % 2 == 0:
            numberOfOperations = numberOfOperations + copyPaste
            totalH = totalH / 2
        else:
            numberOfOperations = (numberOfOperations + copyPaste) + onlyPaste
    return numberOfOperations
