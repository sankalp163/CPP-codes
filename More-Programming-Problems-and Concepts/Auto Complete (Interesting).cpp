#include <string>
#include <vector>
class TrieNode {
	public :
	char data;
	TrieNode **children;
	bool isTerminal;

	TrieNode(char data) {
		this -> data = data;
		children = new TrieNode*[26];
		for(int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = false;
	}
};

class Trie {
	TrieNode *root;

	public :
	int count;

	Trie() {
		this->count = 0;
		root = new TrieNode('\0');
	}

	bool insertWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			if (!root->isTerminal) {
				root -> isTerminal = true;
				return true;	
			} else {
				return false;
			}
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
		}

		// Recursive call
		return insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		if (insertWord(root, word)) {
			this->count++;
		}
	}
    TrieNode* search(TrieNode *root, string word) {
		if(word.size() == 0) {
			return root;
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			return NULL;
		}

		// Recursive call
		return search(child, word.substr(1));
	}
	/*The search function below will return the node where the given pattern ends so
	that in the 'allPossibleWords' function we can give that nose as one of the arguments.
	From that node we will traverse all the upcoming nodes and return the possible words with that 
	pattern in them.
	*/
	TrieNode* search(string word) {
		return search(root, word);
	}
    
    bool isLastNode(TrieNode* root) { 
    	for (int i = 0; i < 26; i++) 
        	if (root->children[i]) 
            	return 0; 
    	return 1; 
	} 
    void allPossibleWords(TrieNode* root, string pattern,string output){
        if(root->isTerminal){	//If the node is the end of some word then we print out the suffix alongwith the prefix(i.e the given pattern)
            cout<<pattern+output;
            cout<<endl;	//To print words in new line
        }
        if (isLastNode(root)) 	//To check if the node being explored is the last one and therefore we simply since we checked the whole line and found no word to be printed
        	return;
        
        for (int i = 0; i < 26; i++) { 	//Exploring each child
        if (root->children[i]){ 
            // append current character to output string 
            output.push_back(97 + i); 	//pushing/appenidng the corresponding letter to our output string
  
            // recursion call 
            allPossibleWords(root->children[i],pattern, output); //We keep going till we find the end of word and then we print it
            // remove last character to empty the output string to store the next word
            output.pop_back(); 
        } 
    } 
        
}
    
    void autoComplete(vector<string> input, string pattern) {
        // Complete this function
        // Print the output as specified in question
        for(int i=0;i<input.size();i++){
            insertWord(input[i]);
        }

        
        TrieNode* ans=search(pattern);
        if(ans==NULL)
            return;
        else{
            string output;
            allPossibleWords(ans,pattern,output);
        }
        
        
    }
    
    
    

};

