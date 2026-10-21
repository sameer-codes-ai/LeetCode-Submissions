class Solution:
    def minOperations(self, s: str) -> int:
        
        v = list(s)
        a = list(s)

        a.sort()

        if len(s)<2:
            return 0
        
        if len(s) == 2:
            if(v[0]!=a[0]): return -1
            else: return 0

        b = True
        for i in range(len(s)):
            if v[i] != a[i]:
                b = False
                break
        if b:
            return 0

        if v[0] == a[0] or v[-1] == a[-1]:
            return 1

        if v[0]==a[-1] and a[0]==v[-1] and (s.count(a[0])==1 and s.count(a[-1])==1):
            return 3

        return 2