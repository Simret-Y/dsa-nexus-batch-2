class Solution:
    def similarPairs(self, words: List[str]) -> int:
        sets= [set(word) for word in words]
        count=0
        for i in range(len(sets)):
            for j in range(i+1,len(sets)):
                if sets[i]==sets[j]:
                 count+=1

        return count
        
