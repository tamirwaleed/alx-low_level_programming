#!/usr/bin/python3
""" Function that returns the perimeter of the island """

def island_perimeter(grid):
    ''' the function '''
    land = 0
    rowlen = len(grid[0])
    collen = len(grid)
    for hor in range(collen):
        for ver in range(rowlen):
            if grid[hor][ver] == 1:
                land += 4
                if (ver == 0 or ver == rowlen - 1):
                    if (ver == 0):
                        if (grid[hor][ver + 1] == 1):
                            land -= 1
                    else:
                        if (grid[hor][ver - 1] == 1):
                            land -= 1
                else:
                    if (grid[hor][ver + 1] == 1):
                        land -= 1
                    if (grid[hor][ver - 1] == 1):
                        land -= 1
                if (hor == 0 or hor == collen - 1):
                    if (hor == 0):
                        if (grid[1][ver] == 1):
                            land -= 1
                    else:
                        if (grid[hor - 1][ver] == 1):
                            land -= 1
                else:
                    if (grid[hor + 1][ver] == 1):
                        land -= 1
                    if (grid[hor - 1][ver] == 1):
                        land -= 1
    return land
