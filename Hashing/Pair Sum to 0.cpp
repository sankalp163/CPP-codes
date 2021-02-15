#include<unordered_map>
void pairSum(int *input, int n) 
{
    //Write your code here	 
    unordered_map<int,int> frequency;
    
    for(int i=0;i<n;i++){
        frequency[input[i]]+=1;
    }
    
    for(int i=0;i<n;i++){
        if(frequency.count(-1*input[i])>0){
            if(input[i]!=0){
            for(int j=1;j<=frequency[input[i]]*frequency[-1*input[i]];j++){
                if(input[i]<0){
                    cout<<input[i]<<" "<<-1*input[i]<<endl;
                }
                else
                    cout<<-1*input[i]<<" "<<input[i]<<endl;
            	}
            }
            else if(input[i]==0){
                if(frequency[input[i]]>1){
                    for(int j=1;j<=frequency[input[i]];j++){
                        cout<<input[i]<<" "<<input[i]<<endl;
                    }
                }
            }
        }
        frequency[input[i]]=0;
        frequency[-1*input[i]]=0;
    }
    
    
}

