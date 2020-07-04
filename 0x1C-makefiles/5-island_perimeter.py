#!/usr/bin/python3
'''Module island perimeter'''


def island_perimeter(grid):
    '''Funtion calculate
    0000000000
    0001100000
    0001110000
    0000110000
    0000000000
    '''

    rows, columns = len(grid), len(grid[0])
    perimeter = 0
    for row in range(rows):
        for square in range(columns):
            if grid[row][square] == 0:
                continue
            if row == 0 or grid[row - 1][square] == 0:
                perimeter += 1
            if row == rows - 1 or grid[row + 1][square] == 0:
                perimeter += 1
            if square == 0 or grid[row][square - 1] == 0:
                perimeter += 1
            if square == columns - 1 or grid[row][square + 1] == 0:
                perimeter += 1
    return perimeter
