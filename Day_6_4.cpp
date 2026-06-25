class trienode
{
public :
trienode* child[26];
bool end;

trienode()
{
    for(int i  =0; i < 26; i++)
    {
        child[i] = NULL;

    }
    end = false;
}
};


class WordDictionary {
public:
trienode* root;
    WordDictionary() {
        root = new trienode();
    }
    
    void addWord(string word) {
        trienode* curr = root;
        for(char c : word)
        {
            if(curr->child[c-'a'] == NULL)
            {
                curr->child[c-'a'] = new trienode();
            }
            curr = curr->child[c-'a'];
        }
        curr->end = true;
    }
    bool dfs(string word,int index,trienode* curr)
    {
        if(index == word.size())
        return curr->end;

        if(word[index] == '.')
        {
            for(int i = 0; i < 26; i++)
            {
                if(curr->child[i] != NULL)
                {

                    if(dfs(word,index+1,curr->child[i]))
                    return true;
                }
            }
            return false;
        }
        char c= word[index];
        if(curr->child[c - 'a'] == NULL)
        return false;

        return dfs(word,index+1,curr->child[c - 'a']);
        
    }
    bool search(string word) {
        return dfs(word,0,root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
