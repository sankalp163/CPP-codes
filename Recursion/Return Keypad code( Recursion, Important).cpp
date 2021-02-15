#include <string>
using namespace std;

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    if(num==0||num==1){
        output[0]="";
        return 1;
    }
    string input[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string S = input[num%10];
    string*output2=new string[1000];
    int small = keypad(num/10,output2);
    int k=0;
    for(int i =0;i<small;i++) {
        for(int j=0;j<S.size();j++){
             output[k]=output2[i]+ S[j];
            k++;
        }
    }
    return k;
        
}
