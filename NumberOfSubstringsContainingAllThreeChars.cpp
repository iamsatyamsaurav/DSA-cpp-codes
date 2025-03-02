class Solution {
public:
    int numberOfSubstrings(string s) {

        //Optimal solution
        int n=s.length();
        vector<int>lastSeen(3,-1);
        int count=0;
        for(int i=0;i<n;i++){
            lastSeen[s[i]-'a']=i;
            if(lastSeen[0]!=-1 && lastSeen[1]!=-1 && lastSeen[2]!=-1){
                //we found the minimum window
                count+= 1+min(lastSeen[0],min(lastSeen[1],lastSeen[2]));
            }
        }
        return count;
        
        //Better solution
        // int n=s.length();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     vector<int>hash(3,0);
        //     for(int j=i;j<n;j++){
        //         hash[s[j]-'a']=1;
        //         if(hash[0] && hash[1] && hash[2]){
        //             count=count+n-j;
        //             break;
        //         }
        //     }
        // }
        // return count;

        //Brute force
        // int n=s.length();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     vector<int>hash(3,0);
        //     for(int j=i;j<n;j++){
        //         hash[s[j]-'a']=1;
        //         if(hash[0] && hash[1] && hash[2]){
        //             count=count+1;
        //         }
        //     }
        // }
        // return count;
    }
};