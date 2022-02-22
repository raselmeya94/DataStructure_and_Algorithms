class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        
        final=[[1],[1,1]]
        for row in range(3,numRows+1):
            ans=[]
            ls=final[-1]
            if len(ls)&1:
                ls=ls[:len(ls)//2+1]
            else:
                ls=ls[:len(ls)//2]
            smm=0
            #print(ls)
            ans=[1]
            for i in range(1,len(ls)):
                smm=ls[i]+ls[i-1]
                ans.append(smm)
            value=[]
            #print(ans)
            if row&1:
                value=ans+[ls[-1]*2]+ans[::-1]
            else:
                value=ans+ans[::-1]
            final.append(value)
        if numRows>=2:
            return(final)
        else:
            return([final[numRows-1]])
