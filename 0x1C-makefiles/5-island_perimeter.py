#!/usr/bin/python3
"""
this for task 5 has a Return the peram of the island in grid.
"""


def island_perimeter(grid):
    """this Method for returns the param of the island  in grid."""
    # p = perimeter, i = iteration 1, j = iteration2
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                try:
                    if grid[i - 1][j] == 0 or i == 0:
                        p += 1
                except IndexError:
                    p += 1

                try:
                    if grid[i + 1][j] == 0:
                        p += 1
                except IndexError:
                    p += 1

                try:
                    if grid[i][j - 1] == 0 or j == 0:
                        p += 1
                except IndexError:
                    p += 1

                try:
                    if grid[i][j + 1] == 0:
                        p += 1
                except IndexError:
                    p += 1
    return p
