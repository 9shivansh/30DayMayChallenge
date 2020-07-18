class Solution:
    def exclusiveTime(self, n, logs):
        """
        :type n: int
        :type logs: List[str]
        :rtype: List[int]
        """
        res = [0]*n
        stack = []
        for log in logs:
            ID, op, time = log.split(':')
            ID = int(ID)
            time = int(time)
            if op == 'start':
                if stack:
                    res[stack[-1][0]] += time-stack[-1][1]
                stack.append([ID, time])
            else:
                prev = stack.pop()
                res[ID] += time-prev[1]+1
                if stack:
                    stack[-1][1] = time+1
        return res