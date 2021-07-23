#!/usr/bin/python3

""" determines the boxes that can be opened """

def canUnlockAll(boxes):

    if len(boxes) == 1:
        return True
    if len(boxes) > 1:
        for i in range(len(boxes)):
            for ii in boxes[i]:
                if ii == boxes[i][0]:
                    return True