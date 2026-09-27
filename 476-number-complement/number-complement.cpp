class Solution {
public:
    int findComplement(int num) {
        int j=0;
        int answer=0;
        
        while(num!=0){
            int bit=num%2;
            bit=1-bit;

            answer=answer | (bit<<j);

            num=num/2;
             j++;
        }
        return answer;
    }
};