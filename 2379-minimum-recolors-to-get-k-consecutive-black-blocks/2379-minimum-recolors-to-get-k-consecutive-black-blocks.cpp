class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int count=0;
        int max_black=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='B'){
                count+=1;
            }
            max_black=count;
        }
        for(int i=k;i<n;i++){
            if(blocks[i]=='B'){
                count+=1;
            }
            if(blocks[i-k]=='B'){
                count-=1;
            }
            max_black=max(count,max_black);
        }
        return k-max_black;
    }
};