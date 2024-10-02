vector<int>photoAlbum(vector<int>index,vector<int>indentity){
    vector<int> res;
    int n=index.size();
    for(int i=0;i<n;i++){
        if(index[i]>=res.size())
            res.push_back(identity[i]);
        else
            res.insert(res.begin()+index[i],identity[i]);
    }
    return res;
}