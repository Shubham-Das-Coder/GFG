class Solution:
    def ExcelColumn(self, N):
        table = [chr(x) for x in range(65, 65+26)]
        table.insert(0, "Z")
        res = ""
        while N > 0:
            rem = N % 26
            res += table[rem]
            if rem == 0:
                N = N//26-1
            else:
                N = N//26
        return res[::-1]
