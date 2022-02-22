
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in range(len(matrix)):
            def binary_search(ls,target):
                l=0
                r=len(ls)-1
                while l<=r:
                    mid=(l+r)//2
                    if ls[mid]==target:
                        return True
                    elif ls[mid]>target:
                        r=mid-1
                    else:
                        l=mid+1
                return False
        for i in range(len(matrix)):
            if binary_search(matrix[i],target)==True:
                return True
        else:
            return False
