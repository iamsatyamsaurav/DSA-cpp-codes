vector<int> superiorElements(vector<int>&a) {

  //OPTIMAL:  
    //reverse itereation 
    //The idea is that if the element is greater than the maximum of all the elements on
    // its right then it is a leader
    
    int maxi=INT_MIN; //maximum on the right
    int n=a.size();
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    sort(ans.begin(),ans.end());//nlogn
    return ans;









    //BRUTE FORCE:

    // vector<int>ans;
    // int n=a.size();
    // int el;
    
    // for(int i=0;i<n-1;i++){
    //     el=a[i];
    //     int count=0;
    //     for(int j=i+1;j<n;j++){
    //         if(el<a[j]){
    //             count++;
    //             break;
    //         }
    //     }
    //     if(count==0){
    //         ans.push_back(el);
    //     }
    // }
    // ans.push_back(a[n-1]);
    // sort(ans.begin(),ans.end());
    // ans.erase(unique(ans.begin(),ans.end()),ans.end());
    // return ans;
}