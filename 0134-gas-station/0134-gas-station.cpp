class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        if(n==1 && gas[0]>=cost[0])return 0;
        int gSum=0;
        int cSum=0;
        for(int ele :gas){
            gSum+=ele;
        }
        for(int ele:cost){
            cSum+=ele;
        }
        if(cSum>gSum)return -1;
        for(int i=0;i<n;i++){
            if(gas[i]>cost[i]){
                int cuu=0;
                bool poss=true;
                for(int j=i;j<n;j++){
                    cuu+=gas[j]-cost[j];
                    if(cuu<0){
                        poss=false;
                        break;
                    }
                }
                if(poss)return i;
            }
            
        }
        return -1;
    }
};