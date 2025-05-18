class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (!isalpha(s[left])) {   //isalpha checks if the character is an alphabet or not
                left++;
            } else if (!isalpha(s[right])) {
                right--;
            } else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};