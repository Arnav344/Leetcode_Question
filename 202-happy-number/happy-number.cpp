class Solution {
public:
    bool isHappy(int n) {
       
        unordered_set<int> seen;

while (n != 1) {

    if (seen.find(n) != seen.end()) {
        return false;
    }

    seen.insert(n);

    int sum = 0;
    int num = n;

    while (num != 0) {
        int digit = num % 10;
        sum = sum + digit * digit;
        num = num / 10;
    }

    n = sum;
}

return true;
        
    }
};