class Node{
    public:
    Node* links[26];
    bool flag;
    Node(){
        for(int i=0;i<26;i++){
            links[i] = NULL;
        }
        flag = false;
    }
    bool isKey(char ch){
        return links[ch-'a']!=NULL;
    }
    void putKey(char ch,Node* node){
        links[ch-'a'] = node;
    }
    Node* next(char ch){
        return links[ch-'a'];
    }
    void setEnd(){
        flag = true;
    }
    bool isEnd(){
        return flag;
    }
};
class Trie{
    private:
    Node* root;
    public:
    Trie(){
        root = new Node();
    }
    void buildTrie(string word){
        Node* node = root;
        for(char ch:word){
            if(!node->isKey(ch)){
                node->putKey(ch,new Node());
            }node = node->next(ch);
        }node->setEnd();
    }
    string succ(string word){
        Node* node = root;
        string res = "";
        for(char ch:word){
            if(node->isKey(ch)){
                res+=ch;
                node = node->next(ch);
            }else{
                if(!node->isEnd()){
                    return word;
                }break;
            }
            if(node->isEnd()){
                break;
            }
        }return res.length()?res:word;
    }
};

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        Trie t;
        for(string s:dictionary){
            t.buildTrie(s);
        }
        string sen = "";
        string res = "";
        for(char ch:sentence){
            if(ch==' '){
                string ret = t.succ(sen);
                res+=ret;
                sen = "";
                res+=" ";
            }else{
                sen+=ch;
            }
        }
        res+=t.succ(sen);
        return res;
    }
};