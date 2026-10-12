class Solution {
public:
    vector<int> constructRectangle(int area) {
        int wid=sqrt(area);
        while(area%wid!=0){
            wid--;
        }
        return {area/wid, wid};
    }
};