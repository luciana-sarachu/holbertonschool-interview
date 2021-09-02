y#!/usr/bin/python3

"""script that reads stdin line by line and computes metrics"""

import sys

status = {"200": 0, "301": 0, "400": 0, "401": 0, "403": 0, "404": 0, "405": 0, "500": 0}

nbrOfLines = 0
size = 0

try: 
    for line in sys.stdin:
        try:
            metrics = line.split()
            size += int(metrics[-1])
            stat = metrics[-2]
            if stat in status:
                status[stat] += 1
        except:
            pass
        print("File size: {}".format(size))
        if nbrOfLines == 9:
            print("{}: {}".format(stat, status[stat]))
            nbrOfLines += 1
except KeyboardInterrupt:
    print("File size: {}".format(size))

