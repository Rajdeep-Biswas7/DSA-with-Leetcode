class Solution {
public:
    int numberOfSpecialChars(string word) {
        int size= word.size();
        int count =0;
        vector<int> u(26,0);
        vector<int> l(26,0);
        for (int i=0; i<size; i++){
            if(word[i] >= 'a' && word[i] <= 'z'){
                l[word[i]-'a']=1;
            }
            else{
                u[word[i]-'A']=1;
            }
        }
        for(int i=0; i<26; i++){
            if(u[i]==1 && l[i]==1){
                count++;
            }
        }
        return count;
        
    }
};