#3.Spiral Matrix
class Solution:
    def spiralOrder(self, mat: list[list[int]]) -> list[int]:
        top=0
        bottom=len(mat)-1
        left=0
        right=len(mat[0])-1
        res=[]
        while left<=right and top<=bottom:
            for col in range(left,right+1):
                res.append(mat[top][col])
            top+=1
            for row in range(top,bottom+1):
                res.append(mat[row][right])
            right-=1
            if top<=bottom:
                for col in range(right,left-1,-1):
                    res.append(mat[bottom][col])
                bottom-=1
            if left<=right:
                for row in range(bottom,top-1,-1):
                    res.append(mat[row][left])
                left+=1
        return res