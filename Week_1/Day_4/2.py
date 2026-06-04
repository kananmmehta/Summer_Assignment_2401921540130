#2.Reshape the Matrix
class Solution:
    def matrixReshape(self, mat: list[list[int]], r: int, c: int) -> list[list[int]]:
        m=len(mat)
        n=len(mat[0])
        if m*n != r*c:
            return mat
        new=[[0]*c for _ in range(r)]
        count=0
        for row in range(m):
            for col in range(n):
                new[count//c][count%c]=mat[row][col]
                count+=1
        return new