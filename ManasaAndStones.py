def stones(n, a, b):

    c = []
    p = 0
    for i in range(0, n):
        p = (i * a) + ((n - 1 - i) * b)
        if not p in c:
            c.append(p)
    
    c.sort()
    return c