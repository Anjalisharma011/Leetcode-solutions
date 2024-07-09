class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double total_time=0;
        int current_time=0;
        for(const auto& customer:customers){
            int arrival_time=customer[0];
            int order_time=customer[1];
            current_time=max(current_time,arrival_time)+order_time;
         total_time+=current_time-arrival_time;
        }
        return total_time/customers.size();
    }
};

    