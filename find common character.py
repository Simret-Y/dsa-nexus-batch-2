class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        common = list(words[0])
        for word in words[1:]:
            new_common = []
            for char in word:
                if char in common:
                    new_common.append(char)
                    common.remove(char)
            common = new_common
        return common

        
