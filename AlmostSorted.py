def almostSorted(arr):
    a=arr[:]
    a.sort()
    if a==arr:
        print("yes")
    count,l=0,[]
    prev=0
    for i in range(len(arr)-1):
        if arr[i]>arr[i+1]:
            count+=1
            l.append(i)
        if prev==count and count>=2:
            break
        prev=count

    r=l[0]
    if count==1:
        arr[r],arr[r+1]=arr[r+1],arr[r]
        if arr==a:
            print("yes")
            print("swap "+ str(r+1)+ " "+str(r+2))
        else:
            print("no")
    elif count==2:
        arr[r],arr[l[-1]+1]=arr[l[-1]+1],arr[r]
        if arr==a:
            print("yes")
            print("swap "+ str(r+1)+ " "+str(l[-1]+2))
        else:
            print("no")
    elif count>2:
        arr[r:l[-1]+2]=sorted(arr[r:l[-1]+2])
        if arr==a:
            print("yes")
            print("reverse "+ str(r+1)+ " "+str(l[-1]+2))
        else:
            print("no")
