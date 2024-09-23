class Solution {
public:
    int commonFactors(int a, int b) {
        int bigger;
        if(a>b){
            bigger=a;
        }
        else{
            bigger=b;
        }
       
       int count=0;
        for(int i=1;i<=bigger;i++){
            if(a%i==0 && b%i==0){
                count++;
            }
        }
        return count;
    }
};