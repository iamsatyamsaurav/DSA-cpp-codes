int majorityElement(vector<int> v) {
	//moores voting algo
	int n=v.size();
	int count=0;
	int el;
	for(int i=0;i<n;i++){
		if(count==0){
			el=v[i];
			count++;
		}
		else{
			if(v[i]!=el){
				count--;
			}
			else{
				count++;
			}
		}

	}
	//verifying if el is the majority element
	count=0;
	for(int i=0;i<n;i++){
		if(v[i]==el){
			count++;
		}
	}
	if(count>n/2){
		return el;
	}
	else{
		return -1;
	}
}