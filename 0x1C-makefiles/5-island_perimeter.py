#!/usr/bin/python3
"""
island_perimeter function mod
"""


def calculate_perimeter(y, x, grid):
    """
    calculate the perimeter of
    singular square at a time
    """
    perimeter = 0
    if x == 0 or grid[y][x - 1] == 0:
        perimeter += 1
    if x == (len(grid[y]) - 1) or grid[y][x + 1] == 0:
        perimeter += 1
    if y == 0 or grid[y - 1][x] == 0:
        perimeter += 1
    if y == (len(grid) - 1) or grid[y + 1][x] == 0:
        perimeter += 1
    return perimeter


def island_perimeter(grid):
    """
    function that returns the perimeter of the
    given 0'sand 1's in a list of lists
    """
    if grid is None or type(grid) != list:
        return 0
    for var_list in grid:
        if type(var_list) != list:
            return 0
        for var_id in var_list:
            if type(var_id) != int:
                return 0
    perimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                perimeter += calculate_perimeter(y, x, grid)
    return perimeter
