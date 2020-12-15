# Letter Combinations of a Phone Number
class Solution:
    def __init__(self):
        self.res = []
        self.mapping = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",
            "8": "tuv",
            "9": "wxyz"
        }

    def letterCombinations(self, digits):
        if len(digits) == 0:
            return []
        self.recursion(digits, 0, "")
        return self.res

    def recursion(self, digits: str, index: int, word: str):
        if index == len(digits):
            self.res.append(word)
            return
        for s in self.mapping[digits[index]]:
            word += s
            self.recursion(digits, index+1, word)
            word = word[:-1]


digits = "23"
ob1 = Solution()
print(ob1.letterCombinations(digits))
