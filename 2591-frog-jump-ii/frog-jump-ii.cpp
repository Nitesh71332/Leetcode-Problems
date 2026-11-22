class Solution {
public:
    int maxJump(vector<int>& stones) {
       int val=0;
       if(stones.size()<=2){
        return (stones[stones.size()-1]-stones[0]);
       }
       for(int i =2;i<stones.size();i++){
        val=max(val,stones[i]-stones[i-2]);
       }
       return val;
    }
};