#!/usr/bin/python3
"""In a text file, there is a single character H. 
Your text editor can execute only two operations in this file: Copy All and Paste."""

def minOperations(n):

"""Given a number n, this method calculates the fewest number of operations needed
 to result in exactly n H characters in the file."""
    
    if n <= 0:
        return 0
    if n % 2 == 0:
        