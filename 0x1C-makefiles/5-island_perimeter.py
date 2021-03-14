#!/usr/bin/python3
"""
    module
"""


def island_perimeter(grid):
    """
        return perimeter of the island
    """
    i = 0
    for k in range(0, len(grid), 1):
        for j in range(0, len(grid[0]), 1):
            if grid[k][j] == 1:
                i = i + 4
                if j - 1 >= 0 and grid[k][j - 1] == 1:
                    i -= 2
                if k - 1 >= 0 and grid[k - 1][j] == 1:
                    i -= 2
    return (i)
