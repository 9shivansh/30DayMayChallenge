def flatlandSpaceStations(n, c):
    c=sorted(c)
    maxim=None
    for i in range(0,len(c)):
        if maxim is None:
            maxim=c[i]-0
        if maxim<(c[i]-c[i-1])//2:
            maxim=(c[i]-c[i-1])//2
        #print(maxim)
    if maxim<(n-1)-c[-1]:
        maxim=(n-1)-c[-1]
    return maxim