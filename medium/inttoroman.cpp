class Solution {
public:
    string intToRoman(int num) {
    
        string romans[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int values[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        
        string res = "";
        
        for(int i=12;i>=0;i--){
            while(num-values[i]>=0){
                res += romans[i];
                num -= values[i];
            }
        }
        
        return res;
    }
};