class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int maxarea=0;
        int left=0;
        int right=n-1;
        while(left<right){
             int width=right-left;
             int h= min(heights[left],heights[right]);
             int area=width*h;
             maxarea=max(area,maxarea);

             if(heights[left]<heights[right])
                left++;
            else
                right--;
        }
        return maxarea;
        
    }
};
