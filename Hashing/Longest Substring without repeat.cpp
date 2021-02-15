int lengthOfLongestSubstring(string s) {
       
        int length=0;
        int maxLength=0;
        int start=0;
        unordered_map<char,int> lastSeen;
        
        for(int end=0;end<s.length();end++){
            start=max(start,lastSeen[s[end]]);
            length=end-start+1;
            
            maxLength=max(length,maxLength);
            lastSeen[s[end]]=end+1;
            
        }
        return maxLength;
    }


