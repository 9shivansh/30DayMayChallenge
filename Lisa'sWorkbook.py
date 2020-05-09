def workbook(n, k, arr):
    
    
    res = 0

    page = 1

    for i in range(len(arr)):
        count = 1
        

        while(count <= arr[i]):
    
            if(count == page):
                res += 1

            if(count % k == 0):
                page += 1

            count += 1
                
        if((count - 1) % k != 0):
            page += 1

    return(res)
