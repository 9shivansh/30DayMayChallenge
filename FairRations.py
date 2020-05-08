def fairRations(B):
    
    ind=[]
    count=0
    for i in range(len(B)):
        if B[i]%2!=0:
            ind.append(i)
    if len(ind)%2!=0:
        return "NO"
    print(ind)
    for i in range(0,len(ind)-1,2):
        count+=2*(ind[i+1]-ind[i])
    return count
