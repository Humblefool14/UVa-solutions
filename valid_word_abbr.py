class ValidWordAbbr:
    
    def abbr(self, word):
        if len(word)<= 2:
            return word
            
        return word[0]+len(word)+word[-1]
        
    def __init__(self, dictionary:list(str)):
        self.lookup={}
        
        for word in dictionary:
            abb = self.abbr(word)
            
            if abb in self.lookup:
                if self.lookup[abb] == word:
                    continue 
                self.lookup[abb] = "REALLY WRONG"
            else:
                self.lookup[abb] = word
    
    def isUnique(self, word:str) -> bool:
        abb = self.abbr(word)
        
        if abb not in self.lookup:
            return True
        if self.lookup[abb] == word:
            return True
        return False
