#!/usr/bin/phyton3
"""calculate how many square units of water will be retained after it rains"""


def rain(walls):
    """https://careerkarma.com/blog/python-min-and-max/#:~:text=Python%20min
    %20%28%29%20Function%20The%20Python%20min%20%28%29,the%20syntax%20for%20
    the%20Python%20min%20%28%29%20method%3A"""
    totalRainwater = 0

    if not walls:
        return 0
    for i in range(len(walls)):
        leftWall = walls[i]
        # print("first left", leftWall)
        for ii in range(i):
            leftWall = max(leftWall, walls[ii])
            # print("second left", leftWall)
        rightWall = walls[i]
        # print("right", rightWall)
        for index in range(i + 1, len(walls)):
            rightWall = max(rightWall, walls[index])
            # print("second right", rightWall)
        totalRainwater = totalRainwater + (min(leftWall, rightWall) - walls[i])
        # print("total", totalRainwater)
    return totalRainwater
