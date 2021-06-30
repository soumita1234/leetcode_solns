class Solution {
public:
    bool isLongPressedName(string name, string typed) {
		
        if(typed.length()<name.length()) return false;
        if(typed==name) return true;
		
        int fast=0,slow=0;
		
        while(slow<name.length()){
			
            if(name[slow]!=typed[fast]) return false;
            else{
				
                if(slow+1<name.length()&&name[slow+1]==name[slow]){
                    slow++;
                    fast++;
                    continue;
                }
				
                while(name[slow]==typed[fast]) fast++;
            }
			
            slow++;
        }
		
        if(typed[fast]!=NULL) return false;
		
        return true;
    }
};
