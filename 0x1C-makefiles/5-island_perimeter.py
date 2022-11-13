#!/usr/bin/python3
'''
island perimter problem
'''


def island_perimeter(grid):
    '''
    get the perimeter from island defined by grid
    '''
    perimeter = 0
    for x, row in enumerate(grid):
        for y, ele in enumerate(row):
            if ele == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    perimeter += 1
                if y == 0 or grid[x][y - 1] == 0:
                    perimeter += 1
                if x == len(grid) - 1 or grid[x + 1][y] == 0:
                    perimeter += 1
                if y == len(row) - 1 or grid[x][y + 1] == 0:
                    perimeter += 1
    return (perimeter)
