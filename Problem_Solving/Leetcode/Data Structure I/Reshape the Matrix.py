class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        ans=[]
        for item in mat:
            ans+=item
        row=len(mat)
        col=len(mat[0])
        if r*c==row*col:
            ls=[ans[i:i+c] for i in range(0,len(ans)-c+1 , c)]
            return(ls)
        else:
            return(mat)
