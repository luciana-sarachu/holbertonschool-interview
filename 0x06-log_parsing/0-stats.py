#!/usr/bin/python3

"""script that reads stdin line by line and computes metrics"""

import sys

status = {"200": 0, "301": 0, "400": 0, "401": 0, "403": 0,
          "404": 0, "405": 0, "500": 0}

nbrOfLines = 0
size = 0

try:
    for line in sys.stdin:
        metrics = line.split()
        size += int(metrics[-1])
        stat = metrics[-2]
        print("File size: {}".format(size))
        for stat in status:
            status[stat] += 1
            nbrOfLines += 1
            print("{}: {}".format(stat, status[stat]))
        if nbrOfLines == 9 or KeyboardInterrupt:
            print("File size: {}".format(size))
        else:
            pass
except KeyboardInterrupt:
        print("File size: {}".format(size))
        print("{}: {}".format(stat, status[stat]))
