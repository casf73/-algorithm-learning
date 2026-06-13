class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k = 1;
        int maxrate = 1e9;
        while(k < maxrate){
            int mid = k + (maxrate - k)/2;
            int cnt = 0;
            for(int i = 0 ;i < piles.size() ; i++){
                if(piles[i] % mid != 0) cnt += piles[i]/mid + 1;
                else cnt += piles[i]/mid;
            }
            if(cnt <= h) maxrate = mid;
            else k = mid + 1;
        }
        return k;
    }
};
