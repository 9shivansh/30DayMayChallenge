
def abbreviation(a, b):
    def is_upper(c):
        return c and c == c.upper()

    # Edge cases
    if not a and not b:
        return "YES"
    elif (b and not a) or (len(b) > len(a)):
        return "NO"
    
    cols = len(b) + 1
    rows = len(a) + 1
    table = [[False] * cols for _ in range(rows)]
    
    # Empty string
    table[0][0] = True

    # Update the table values for "a"
    for i in range(1, rows):
        # Upper case letter -/-> Empty string
        if is_upper(a[i-1]):
            break
        # Lower case letter -> Empty string
        table[i][0] = True
    
    # Fill the table
    for row in range(1, rows):
        i = row - 1
        for col in range(1, cols):
            j = col - 1
            if a[i] == b[j]:
                # Two uppercase letters that match
                table[row][col] = table[row-1][col-1]
            elif a[i].upper() == b[j]:
                # A lower case letter matching an uppercase one
                table[row][col] = (
                    table[row-1][col-1] or 
                    table[row-1][col])
            elif is_upper(a[i]):
                # A different uppercase char, can't be matched
                table[row][col] = False
            else:
                # A different lowercase char, drop it
                # Dropping = select prev char match for same col
                table[row][col] = table[row-1][col]
    
    return "YES" if table[-1][-1] else "NO"
