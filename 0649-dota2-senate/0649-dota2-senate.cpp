class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.size();
        queue<int>rad_queue;
        queue<int>dir_queue;
        for(int i=0;i<n;i++){
            if(senate[i]=='R'){
                rad_queue.push(i);
            }
            else{
                dir_queue.push(i);
            }
        }
        while(!rad_queue.empty() && !dir_queue.empty()){
            int rad_index=rad_queue.front();
            int dir_index=dir_queue.front();
            rad_queue.pop();
            dir_queue.pop();
            if(rad_index<dir_index){
                rad_queue.push(rad_index+n);
            }
            else{
                dir_queue.push(dir_index+n);
                }
            
        }
        return rad_queue.empty()?"Dire":"Radiant";
    }
};