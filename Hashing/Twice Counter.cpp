int countWords(string list[], int n)
        {
           //code here.
           unordered_map<string,int> frequency;
           
           for(int i=0;i<n;i++){
               frequency[list[i]]++;
           }
           
           int output=0;
           
           for(int i=0;i<n;i++){
               if(frequency[list[i]]==2){
                   output++;
                   frequency[list[i]]=0;
               }
            }
            
            return output;
        }
