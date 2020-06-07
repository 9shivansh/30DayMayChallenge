class Solution(object):
    def findRestaurant(self, list1, list2):
                           res={}
                           for i in range(len(list1)):
                                if list1[i] in list2:
                                        y=list2.index(list1[i])
                                        res[list1[i]]=i+y
                         
                           if len(set(list(res.values())))==1:
                                            test=list(res.keys())
                                            return test
                
                           mini=min(res,key=res.get)
                           return [mini]