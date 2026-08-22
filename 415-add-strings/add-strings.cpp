class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size(),m=num2.size();
        int i=n-1;
        int j=m-1;
        int carry=0;
        string res="";
        while(i>=0 || j>=0 || carry)
        {
            int digit1 = 0;
            int digit2 = 0;

            if (i >= 0)
            digit1 = num1[i] - '0';

            if (j >= 0)
            digit2 = num2[j] - '0';

            int sum = (digit1+digit2) + carry;
            res += (sum% 10+'0');
            carry = sum/10;
            i--;
            j--;
        }
        reverse(res.begin(),res.end());
        return res;
        
        
        // int a = stoi(num1);
        // int b = stoi(num2);
        // int c = a+b;
        // return (to_string(c));
    }
};