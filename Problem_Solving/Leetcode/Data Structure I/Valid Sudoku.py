class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # row check
        for j in range(9):
            #board[i]
            ls=[int(board[i][j]) for i in range(9) if board[i][j]!="."]
            if len(ls)!=len(set(ls)):
                return False
        #column check
        for j in range(9):
            #board[i]
            ls=[int(board[j][i]) for i in range(9) if board[j][i]!="."]
            if len(ls)!=len(set(ls)):
                return False
        # 3*3 block check
        for i in range(0,9,3):
            for j in range(0,9,3):
                block=board[i][j:j+3]+board[i+1][j:j+3]+board[i+2][j:j+3]
                ls=[int(item) for item in block if item!="."]
                if len(ls)!=len(set(ls)):
                    return False
        return True

                
        
