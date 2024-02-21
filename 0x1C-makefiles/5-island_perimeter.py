#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Calculate and return the perimeter of an island.

    The grid represents water with 0 and land with 1.

    Args:
        grid (list): A list of lists of integers representing an island.

    Returns:
        int: The perimeter of the island described in the input grid.
    """
    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            x1 = grid[i][j + 1] if j + 1 < len(grid[i]) else 0
            x2 = grid[i][j - 1] if j - 1 >= 0 else 0
            y1 = grid[i - 1][j] if i - 1 >= 0 else 0
            y2 = grid[i + 1][j] if i + 1 < len(grid) else 0

            list_of_zeros = [x1, x2, y1, y2]
            if grid[i][j] == 1:
                if list_of_zeros.count(0) == 4:
                    perimeter += 4*1
                if list_of_zeros.count(0) == 3:
                    perimeter += 3*1
                if list_of_zeros.count(0) == 2:
                    perimeter += 2*1
                if list_of_zeros.count(0) == 1:
                    perimeter += 1*1
                if list_of_zeros.count(0) == 0:
                    perimeter += 0
    return (perimeter)
