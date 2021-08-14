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

    if n <= 1:
        return 0

    while totalH < n: 
        if totalH == 1:
            print(totalH)
            numberOfOperations += copyPaste
            totalH = totalH + totalH
        if totalH % 2 == 0 and totalH * 2 <= n:
            print(totalH)
            numberOfOperations += copyPaste
            totalH = totalH + totalH
        else:
            print('entre al else')
            totalH += totalH / 2
            numberOfOperations += onlyPaste
    return numberOfOperations
