class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>ans(n); 
        stack<int>Stack; 
        for (int i = 0; i < n; ++i) {
            while (!Stack.empty() && temperatures[Stack.top()] < temperatures[i]) {
                int Index =Stack.top(); 
                ans[Index] = i -Index; 
                Stack.pop(); 
            }
            Stack.push(i);
        }
        return ans;
    }
};