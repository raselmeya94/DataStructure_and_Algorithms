from collections import Counter
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        r=Counter(ransomNote)
        m=Counter(magazine)
        for i in r.keys():
            if( i in m.keys()) and r[i]<=m[i]:
                continue
            else:
                return False
        return True
        
