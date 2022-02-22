from collections import Counter
class Solution:
    def firstUniqChar(self, s: str) -> int:
        r=Counter(s)
        for i in r.keys():
        	if r[i]==1:
        		return(s.index(i))
        return -1
