#!usr/bin/env phyton3
"""Given a list of non-negative integers representing the heights of
walls with unit width 1, as if viewing the cross-section of a relief map,
calculate how many square units of water will be retained after it rains."""
from typing import TextIO


def rain(walls):
    """https://careerkarma.com/blog/python-min-and-max/#:~:text=Python%20min
    %20%28%29%20Function%20The%20Python%20min%20%28%29,the%20syntax%20for%20
    the%20Python%20min%20%28%29%20method%3A"""
    totalRainwater = 0

    if not walls:
        return 0
    for i in range(len(walls) - 1):
        leftWall = walls[i]
        for ii in range(i):
            leftWall = max(leftWall, walls[ii])
        rightWall = walls[i]
        for index in range(i + 1, len(walls)):
            rightWall = max(rightWall, walls[index])
        totalRainwater = totalRainwater + (min(leftWall, rightWall) - walls[i])
    return totalRainwater
