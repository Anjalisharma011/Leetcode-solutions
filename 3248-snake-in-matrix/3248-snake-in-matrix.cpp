class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0;
        int x=0;
        for(auto& command:commands){
            if(command=="RIGHT"){
                i++;
            }
            if(command=="LEFT"){
                i--;
            }
            if(command=="UP"){
                x--;
            }
            if(command=="DOWN"){
                x++;
            }
        }
        return (x*n)+i;
    }
};