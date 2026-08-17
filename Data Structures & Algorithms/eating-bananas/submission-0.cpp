class Solution {
public:
    int findmax(vector<int> &v){
        int n = v.size();
        int maxi=INT_MIN;
        for(int i =0 ;i<n;i++){
            maxi=max(maxi,v[i]);

        }
        return maxi;
    }
    int calcH (vector<int> &v,int hour){
        int tot=0;
        int n =v.size();
        for(int i =0;i<n;i++){
            tot += ceil(double(v[i])/double(hour));

        }
        return tot;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=findmax(piles);
        while(low<=high){
            int mid = (low+high)/2;
            int totalH =calcH(piles,mid);
                if(totalH <= h ){
                      high=mid-1;
                }
                else
                   low=mid+1;
                
        }
        return low;
       
    }
};
