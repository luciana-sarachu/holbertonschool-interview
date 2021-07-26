#!/usr/bin/python3

""" determines the boxes that can be opened """


def canUnlockAll(boxes):
    """Method that determines if all the boxes can be opened."""
    boxesToOpen = len(boxes)
    keys = [0]

    for i in keys:
        for ii in boxes[i]:
            if ii < boxesToOpen and ii not in keys:
                keys.append(ii)
        if boxesToOpen == len(keys):
            return True
        else:
            return False
