// #include<set>
vector < int > sortedArray(vector < int > a, vector < int > b) {
   //optimal approach
//    vector<int> ans;
//    int n=a.size();
//    int m=b.size();
//    int i=0,j=0;
//    while(i<n && j<m){
//        //putting the smaller element in ans
//       if(a[i]<=b[j]){
//           if(ans.size()==0||a[i]!=ans.back()){
//               ans.push_back(a[i]);
//               i++;
//           }
//       }
//       else{
//            if(ans.size()==0||b[j]!=ans.back()){
//               ans.push_back(b[j]);
//               j++;
//       }
//    }
//    while(i<n){
//        if(ans.size()==0||a[i]!=ans.back()){
//               ans.push_back(a[i]);
//               i++;
//           }
//    }
//    while(j<m){
//        if(ans.size()==0||b[j]!=ans.back()){
//               ans.push_back(b[j]);
//               j++;
//       }
//    }
//    return ans;
   
   
   
   
   
   
    //brute force
    // vector<int>ans;
    // set<int>s;
    // int n=a.size();
    // int m=b.size();
    // for(int i=0;i<n;i++){
    //     s.insert(a[i]);
    // }
    // for(int i=0;i<m;i++){
    //     s.insert(b[i]);
    // }
    // int i=0;
    // for(auto it:s){
    //     ans.push_back(it);
    //     i++;
    // }
    // return ans;
    
    //better approach

    int n=a.size();
    int m=b.size();
    int i=0;
    //making unique elements array
    vector<int>ans;
    for(int j=0;j<n;j++){
        if(a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
    }
    int asize=i+1;
     i=0;
    for(int j=0;j<m;j++){
        if(b[i]!=b[j]){
            b[i+1]=b[j];
            i++;
        }
    }
    int bsize=i+1;
    i=0;
    int j=0;
    //merging the two sorted unique elments arrays
    while(i<asize && j<bsize){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<asize){
        ans.push_back(a[i]);
            i++;
    }
    while(j<bsize){
         ans.push_back(b[j]);
            j++;
    }
    return ans;
}