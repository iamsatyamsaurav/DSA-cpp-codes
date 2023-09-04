        #include<iostream>
        using namespace std;
        int main(){
            string str;
            cin>>str;
            int i;
            int arr[26]={0};
            for(int i=0;i<str.size();i++){
            int index=str[i]-'a';
            arr[index]++;    //entered the elements in the counting array
         }
            int maxi=0,maxIndex=-1;
            char ans;
            for(i=0;i<26;i++){
            if(arr[i]>maxi){
                maxi=arr[i];  //finding the maximum count
                maxIndex=i;  
            }
            
        }
        ans=maxIndex+'a';
        cout<<ans;
        }
        
        
        