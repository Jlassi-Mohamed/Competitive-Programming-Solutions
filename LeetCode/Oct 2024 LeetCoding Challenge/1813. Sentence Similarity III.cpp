class Solution:
    def areSentencesSimilar(self, sentence1: str, sentence2: str) -> bool:
        s1 = sentence1.split()
        s2 = sentence2.split()

        if len(s1)<len(s2):
            s1, s2 = s2, s1
        
        n2 = len(s2)
        n1 = len(s1)

        start, end= 0, 0

        while start<n2 and s1[start] == s2[start]:
            start += 1
        
        while end<n2 and s1[n1-1-end] == s2[n2-1-end]:
            end += 1
        
        return start + end >= n2
        
