class Solution:
    def groupThePeople(self, groupSizes: List[int]) -> List[List[int]]:
        temp = {}
        result = []
        for i in range(len(groupSizes)):
            if groupSizes[i] not in temp:
                temp[groupSizes[i]] = [i]
            elif len(temp[groupSizes[i]]) < groupSizes[i]:
                temp[groupSizes[i]].append(i)
            if len(temp[groupSizes[i]]) == groupSizes[i]:
                result.append(temp[groupSizes[i]])
                temp[groupSizes[i]] = []
                
        return result
    
    