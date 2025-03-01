class Solution {
public:
    //Problem boils down to longest subarray with two distinct numbers
    int totalFruit(vector<int>& fruits) {
        
        //OPTIMAL SOLUTION
        int n=fruits.size();
        int l=0,r=0,maxLen=0;
        unordered_map<int,int>mp; //<number,count>
        while(r<n){
            mp[fruits[r]]++;
            
            //window shrink
            if(mp.size()>2){        //just replaced while by if
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                    mp.erase(fruits[l]);
                }
                l++;
            }

            //window expand
            if(mp.size()<=2){
                int len=r-l+1;
                maxLen=max(len,maxLen);
            }
            r++;
        }
        return maxLen;

        //BETTER SOLUTION
        // int n=fruits.size();
        // int l=0,r=0,maxLen=0;
        // unordered_map<int,int>mp; //<number,count>
        // while(r<n){
        //     mp[fruits[r]]++;
            
        //     //window shrink
        //     while(mp.size()>2){
        //         mp[fruits[l]]--;
        //         if(mp[fruits[l]]==0){
        //             mp.erase(fruits[l]);
        //         }
        //         l++;
        //     }

        //     //window expand
        //     if(mp.size()<=2){
        //         int len=r-l+1;
        //         maxLen=max(len,maxLen);
        //     }
        //     r++;
        // }
        // return maxLen;


        //BRUTE FORCE
        // int maxLen=0;
        // int n=fruits.size();
        // for(int i=0;i<n;i++){
        //     set<int>s;
        //     for(int j=i;j<n;j++){
        //         s.insert(fruits[j]);
        //         if(s.size()>2){
        //             break;
        //         }
        //         else{
        //             int len=j-i+1;
        //             maxLen=max(len,maxLen);
        //         }

        //     }
        // }
        // return maxLen;
    }
};