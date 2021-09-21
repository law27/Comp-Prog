class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x % 10 == x) return true;
        vector<int> arr;
        while(x != 0) {
            arr.push_back(x % 10);
            x /= 10;
        }
        int i = 0;
        int j = arr.size() - 1;
        while(i < arr.size() / 2 && j >= arr.size() / 2) {
            if(arr.at(i++) != arr.at(j--)) return false;
        }
        return true;
    }
};
