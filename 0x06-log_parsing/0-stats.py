#!/usr/bin/python3

"""script that reads stdin line by line and computes metrics"""

import sys

status = [200, 301, 400, 401, 403, 404, 405, 500]

nbrOfLines = 0
size = 0

for line in sys.stdin:
    metrics = line.split()
    size += int(metrics[-1])
    stat = metrics[-2]
    if stat in status:
        print("File size: {}".format(size))
        nbrOfLines += 1
        if nbrOfLines == 9 or KeyboardInterrupt:
            print("File size: {}".format(size))
    else:
        pass