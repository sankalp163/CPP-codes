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

	bool search(TrieNode *root, string word){
        if(word.size()==0){
            return true;
        }
        int index=word[0]-'a';
        TrieNode *child;
        if(root->children[index]==NULL){
            return false;
        }
        child=root->children[index];
        bool res=search(child,word.substr(1));
        
        return res;
    }
    bool search(string word) {
        // Write your code here
        return search(root,word);
    }

	bool patternMatching(vector<string> vect, string pattern) {
		// Complete this function
		// Return true or false
    	for(int i=0;i<vect.size();i++){
            insertWord(vect[i]);
            for(int j=1;j<vect[i].size();j++){
                insertWord(vect[i].substr(j));
            }
        }
        
        bool res=search(pattern);
        
        return res;

	}
};

