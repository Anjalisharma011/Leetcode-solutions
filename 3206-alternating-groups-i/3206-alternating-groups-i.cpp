class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int count=0;
        int n=colors.size();
        for(int i=0;i<colors.size();i++){
            int prev=colors[i];
            int curr=colors[(i+1)%n];
            int next=colors[(i+2)%n];
            if(curr!=prev && curr!=next){
                count++;
            }
        }
        return count;
    }
};