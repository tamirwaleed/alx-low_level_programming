#!/usr/bin/python3
""" Function that returns the perimeter of the island """

def island_perimeter(grid):
    ''' the function '''
    land = 0
    hor = 0
    ver = 0
    for row in grid:
        hor += 1
        for cell in row:
            ver += 1
            if (ver == len(row)):
                ver -= 1
            if cell == 1:
                land += 4
                if (ver == 1 or ver == len(row)):
                    land -= 1
                    if (ver == 1):
                        if (row[ver] == 1):
                            land -= 1
                    else:
                        if (row[len(row)] == 1):
                            land -= 1
                else:
                    if (row[ver] == 1):
                        land -= 1
                    if (row[ver - 2] == 1):
                        land -= 1
                if (hor == 1 or hor == len(grid)):
                    if (hor == 1):
                        if (grid[1][ver - 1] == 1):
                            land -= 1
                    else:
                        if (grid[len(grid) - 1][ver - 1] == 1):
                            land -= 1
                else:
                    if (grid[1][ver - 1] == 1):
                        land -= 1
                    if (grid[len(grid) - 1][ver - 1] == 1):
                        land -= 1
    return land
