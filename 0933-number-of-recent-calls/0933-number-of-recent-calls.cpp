class RecentCounter {
    private: deque<int>pings;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        pings.push_back(t);
        while(!pings.empty() && pings.front()<t-3000){
            pings.pop_front();
        }
        return pings.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */