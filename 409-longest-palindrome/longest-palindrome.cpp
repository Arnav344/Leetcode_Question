class Solution {
public:
    int longestPalindrome(string s) {
        int count[128]={0};
         for (int i = 0; i < s.size(); i++) {
            count[s[i] ]++;
        }
        int length=0;
        bool isodd=false;
        for(int i=0;i<128;i++){
            length += count[i]-(count[i] % 2);

        
            if(count[i]%2!=0){
                isodd=true;
            }
        }
        if(isodd){
            length++;
        }
        return length;
    }
};