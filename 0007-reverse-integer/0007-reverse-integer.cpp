class Solution {
public:
    int reverse(int x) {
        long ans = 0;

        while (x != 0) {
            int digit = x % 10;        // get last digit (works for negatives too)
            ans = ans * 10 + digit;
            if (ans > INT_MAX || ans < INT_MIN) return 0;  // overflow check
            x /= 10;
        }

        return (int)ans;
    }
};
