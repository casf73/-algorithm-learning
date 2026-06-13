class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int min = *max_element(weights.begin(), weights.end());
        int max = accumulate(weights.begin(), weights.end(), 0);
        while(min < max){
            int mid = min + (max - min)/2;
            int cnt = 1;
            int storage = mid;
            for(int i = 0 ; i < weights.size() ; i++){
                if(storage - weights[i] >= 0) storage -= weights[i];
                else{
                    cnt += 1;
                    storage = mid - weights[i];
                }
            }
            if(cnt <= days) max = mid;
            else min = mid + 1;
        }
        return min;
    }
};