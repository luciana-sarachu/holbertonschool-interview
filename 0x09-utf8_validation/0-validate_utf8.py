#!/usr/bin/python3
""" https://helloacm.com/how-to-validate-utf-8-encoding-the
-simple-utf-8-validation-algorithm/
A character in UTF8 can be from 1 to 4 bytes long, subjected to the following
rules: For 1-byte character, the first bit is 0, followed by its unicode code
For n-bytes character, the first n-bits are all one’s, the n+1 bit is 0,
followed by n-1 bytes with most significant 2 bits being 10.
"""


def validUTF8(data):
    """ determine if a given data set is a valid UTF-8 encoding """
    nbrOfbytes = 0
    for i in data:
        """check how many initial bits are set in data"""
        mask = 1 << 7
        if nbrOfbytes == 0:
            while mask & i:
                nbrOfbytes = nbrOfbytes + 1
                mask = mask >> 1
            if nbrOfbytes == 0:
                continue
            elif nbrOfbytes == 1 or nbrOfbytes > 4:
                return False
        else:
            """Check if the most significant bit is a 1 and
             the second most significant bit is a 0"""
            if not (i & 1 << 7 and not (i & 1 << 6)):
                return False
        nbrOfbytes = nbrOfbytes - 1
    if nbrOfbytes == 0:
        return True
    return False
