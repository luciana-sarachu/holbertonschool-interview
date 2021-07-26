#!/usr/bin/python3

""" determines the boxes that can be opened """


def canUnlockAll(boxes):
    """Method that determines if all the boxes can be opened."""
    openedBoxes = [1]
    keys = [0]
    count = 0

    for i in range(1, len(boxes)):
        openedBoxes.append(0)
    for i in keys:
        openedBoxes[i] = 1
        for ii in boxes[i]:
            if ii not in keys and ii < len(boxes):
                keys.append(ii)
    for i in openedBoxes:
        if i == 1:
            count += 1
    if count == len(openedBoxes):
        return True
    else:
        return False
