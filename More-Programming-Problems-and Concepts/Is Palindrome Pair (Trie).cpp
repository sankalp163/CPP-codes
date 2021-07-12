#include <string>
#include <vector>

class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;
    int childCount;

    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount = 0;
    }
};

class Trie
{
    TrieNode *root;

public:
    int count;

    Trie()
    {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool add(TrieNode *root, string word)
    {
        // Base case
        if (word.size() == 0)
        {
            if (!root->isTerminal)
            {
                root->isTerminal = true;
                return true;
            }
            else
            {
                return false;
            }
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
            root->childCount++;
        }

        // Recursive call
        return add(child, word.substr(1));
    }

    // For user
    void add(string word)
    {
        if (add(root, word))
        {
            this->count++;
        }
    }
    
    bool search(TrieNode *root, string word) {
		if(word.size() == 0) {
			return true;
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			return false;
		}

		// Recursive call
		return search(child, word.substr(1));
	}

	bool search(string word) {
		return search(root, word);
	}

    /*..................... Palindrome Pair................... */
    

    bool isPalindromePair(vector<string> words)
    {
		//Write your code here
        for(int i=0;i<words.size();i++){
            	add(words[i]);
            for(int j=1;j<words[i].size();j++){
                add(words[i].substr(j));
            }
        }
        
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            reverse(temp.begin(),temp.end());
            
            if(search(temp))
                return true;
        
        }
        return false;
    }

};
