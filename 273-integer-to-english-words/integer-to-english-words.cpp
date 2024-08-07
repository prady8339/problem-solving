class Solution {
public:
    string ones[10] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string tens[10] ={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    string teens[10] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    
    string numberToWords(int num) {
        if(num == 0) return "Zero";
        string val = helper(num);
        string ans = "";
        for(char c : val) {
            if(c >='A' && c<='Z') {
                ans += " ";
            } 
            ans += c;
        }
        return ans.substr(1);
    }
    
    string helper(int num) {
        if(num >=1000000000) {
            return helper(num/1000000000) + "Billion" + helper(num%1000000000);
        } else if(num >=1000000) {
            return helper(num/1000000) + "Million" + helper(num%1000000);
        } else if(num>=1000) {
            return helper(num/1000) + "Thousand" + helper(num%1000);
        } else if(num >=100) {
            return helper(num/100) + "Hundred" + helper(num%100);
        } else if(num >=20) {
            return tens[num/10] +helper(num%10);
        } else if(num>=10) {
            return teens[num - 10];
        } else if(num>=1) return ones[num];
        return "";
    }
};