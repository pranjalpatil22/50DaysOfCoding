
class trienode
{
    public:
    trienode* child[26];
    bool end;

    trienode()
    {
        for(int i = 0; i < 26; i++)
        {
            child[i] = nullptr;

        }
        end = false;
    }
};

class Trie {
public:
trienode* root;
    Trie() {
        root = new trienode();
    }
    
    void insert(string word) {
        trienode* curr = root;
        for(char c : word)
        {
            if(curr->child[c - 'a'] == NULL)
            curr->child[c-'a'] = new trienode();

            curr = curr->child[c-'a'];
        }
        curr->end = true;
    }
    
    bool search(string word) {
        trienode* curr = root;

        for(char c : word)
        {
            if(curr->child[c-'a'] == NULL)
            {
                return false;
            }
            curr = curr->child[c-'a'];


        }
        if(curr->end == true)
        return true;
        else
        return false;
    }
    
    bool startsWith(string prefix) {
        trienode* curr = root;

        for(char c : prefix)
        {
            if(curr->child[c-'a'] == NULL)
            {
                return false;
            }

            curr = curr->child[c-'a'];

        }

        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
