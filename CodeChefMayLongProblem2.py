testcases = int(input())
for i in range(0, testcases):
    b = input().split()
    length = int(b[0])
    q = int(b[1])
    s = input()
    freq = {}
    for c in s:
        if c in freq:
            freq[c] = freq[c] + 1
        else:
            freq[c] = 1
    
    for k in range(0, q):
        query = int(input())
        result = 0
        for value in freq.values():
            value = value - query
            if(value > 0):
                result = result + value
        print(result)
                