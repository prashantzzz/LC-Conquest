class Solution:
    def reverseWords(self, s: str) -> str:
        s.strip()
        s.replace("  "," ")
        l=s.split()
        l.reverse()
        s=' '.join(l)
        return s


