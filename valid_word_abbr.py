class ValidWordAbbr:
    
    def abbr(self, word: str) -> str:
        if len(word) <= 2:
            return word
        # Convert length to string and subtract 2 for the inner characters
        return word[0] + str(len(word) - 2) + word[-1]
        
    def __init__(self, dictionary: list[str]):
        self.lookup = {}
        
        for word in dictionary:
            abb = self.abbr(word)
            
            if abb in self.lookup:
                # If we see the exact same word again, it's fine
                if self.lookup[abb] == word:
                    continue 
                # If a different word shares the same abbreviation, mark it invalid
                self.lookup[abb] = "REALLY WRONG"
            else:
                self.lookup[abb] = word
    
    def isUnique(self, word: str) -> bool:
        abb = self.abbr(word)
        
        # 1. Abbreviation doesn't exist in the dictionary at all -> True
        if abb not in self.lookup:
            return True
        # 2. The abbreviation exists, but ONLY for this exact word -> True
        if self.lookup[abb] == word:
            return True
        # 3. Another word has this abbreviation -> False
        return False
