class Solution {
private:
    int solve(int num){
        if(num<=9)return num;
        int s=0;
        while(num){
            s+=num%10;
            num=num/10;
        }
        return solve(s);
    }
public:
    int addDigits(int num) {
        return solve(num);        
    }
};