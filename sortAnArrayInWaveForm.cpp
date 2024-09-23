vector<int> waveFormArray(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    int i=0;
    int j=n-1;
    vector<int>ans;
    while(i<=j){
        ans.push_back(arr[j]);
        j--;
        ans.push_back(arr[i]);
        i++;
    }
    return ans;
}