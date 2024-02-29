class Solution {
public:
    string reverseWords(string str) {
        int len=str.length();
	string ans="";
	stack<char>s;
	for(int i=len-1;i>=0;i--){
		if(str[i]==' '){
			continue;
		}
		while(i>=0 && str[i]!=' '){
			s.push(str[i]);
			i--;
		}
		while(s.size()>0){
			char element=s.top();
			s.pop();
			ans.push_back(element);
		}
		ans.push_back(' ');
	}
	ans.pop_back();	
	return ans;
    }
};