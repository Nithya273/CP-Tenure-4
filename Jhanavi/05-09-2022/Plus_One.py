class Solution(object):
    def plusOne(self, digits):
       res = ""
       x = []
       for i in digits :
        res += str(i)
       res = int(res) 
       res +=1
       res = str(res)
       for i in res :
            x.append(int(i))
       return res     
