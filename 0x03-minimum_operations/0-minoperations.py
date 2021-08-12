#!/usr/bin/python3
"""In a text file, there is a single character H. 
Your text editor can execute only two operations in this file: Copy All and Paste."""

def minOperations(n):

    """Given a number n, this method calculates the fewest number of operations needed
    to result in exactly n H characters in the file."""
   
    copyPaste = 2
    onlyPaste = 1
    numberOfOperations = 2
        
    if n <= 1:
        return 0

    while n:    
        if n % 2 == 0:
            numberOfOperations = numberOfOperations + copyPaste 
        else:
            copyPaste += onlyPaste
    return numberOfOperations