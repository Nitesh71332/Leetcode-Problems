class Solution {
public:
    int reverse(int x) {
        int ma=INT_MAX;
        int mi=INT_MIN;
        int ans=0;
        while(x!=0){
            int last=x%10;
            if(ans>ma/10 ||ans==ma/10&&last==7){
                return 0;
            }
           if(ans<mi/10||ans==mi/10&&last==-8){
                return 0;
            }
            ans=ans*10+last;
            x=x/10;
        }
        return ans;
    }
};