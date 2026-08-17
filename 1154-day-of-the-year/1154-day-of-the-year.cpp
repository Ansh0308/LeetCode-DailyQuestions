class Solution {
public:
    int dayOfYear(string date) {
        int n=date.size();
        vector<int> months(13);
        months[1]=31;
        months[2]=28;
        months[3]=31;
        months[4]=30;
        months[5]=31;
        months[6]=30;
        months[7]=31;
        months[8]=31;
        months[9]=30;
        months[10]=31;
        months[11]=30;
        months[12]=31;
        int ans=0;
        string temp="";
        for(int i=8;i<n;i++){
            temp+=date[i];
        }
        
        ans+=stoi(temp);
        int day=ans;
        temp="";
        for(int i=5;i<n && date[i]!='-';i++){
            temp+=date[i];
        }
        int month=stoi(temp);
        for(int i=1;i<month;i++){
            ans+=months[i];
        }
        temp="";
        for(int i=0;i<n && date[i]!='-';i++){
            temp+=date[i];
        }
        int year=stoi(temp);
        if(((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )&& month >2){
          
                ans+=1;
            
            }
        return ans;
        
    }
};