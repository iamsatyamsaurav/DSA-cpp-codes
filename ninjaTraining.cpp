// int f(int day,int last,vector<vector<int>> &points,vector<vector<int>> &dp){
//     //base case
//     if(day==0){
//         int maxi=0;
//         for(int task=0;task<3;task++){
//             if(last!=task){
//                 maxi=max(maxi,points[day][task]);
//             }
//         }
//         return maxi;
//     }
//     if(dp[day][last]!=-1){
//         return dp[day][last];
//     }
//     int maxi=0;
//     for(int task=0;task<3;task++){
//         if(task!=last){
//             int meritPoints=points[day][task]+f(day-1,task,points,dp);
//             maxi=max(maxi,meritPoints);
//         }
//     }
//     return dp[day][last]= maxi;
// }
int ninjaTraining(int n, vector<vector<int>> &points)
{
    //space optimisation
    vector<int>prev(4,-1);
    prev[0]=max(points[0][1],points[0][2]); //day is 0 and last task done is 0
    prev[1]=max(points[0][0],points[0][2]); //day is 0 and last task done is 1
    prev[2]=max(points[0][0],points[0][1]);
    prev[3]=max(points[0][0],max(points[0][1],points[0][2]));

    for(int day=1;day<n;day++){
        vector<int>temp(4,-1); //for each day
        for(int last=0;last<4;last++){
            int maxi=0;
            for(int task = 0 ;task<3;task++){
                if(task!=last){
                    int meritPoints=points[day][task]+prev[task];
                    maxi=max(maxi,meritPoints);
                }
            }
            temp[last]=maxi;
        }
        prev=temp;
    }
    return prev[3];





    //tabulation
    // vector<vector<int>>dp(n,vector<int>(4,-1)); 
    // dp[0][0]=max(points[0][1],points[0][2]); //day is 0 and last task done is 0
    // dp[0][1]=max(points[0][0],points[0][2]);
    // dp[0][2]=max(points[0][0],points[0][1]);
    // dp[0][3]=max(points[0][0],max(points[0][1],points[0][2]));

    // for(int day=1;day<n;day++){
    //     for(int last=0;last<4;last++){
    //         int maxi=0;
    //         for(int task = 0 ;task<3;task++){
    //             if(task!=last){
    //                 int meritPoints=points[day][task]+dp[day-1][task];
    //                 maxi=max(maxi,meritPoints);
    //             }
    //         }
    //         dp[day][last]=maxi;
    //     }
    // }
    // return dp[n-1][3];

    //memoization
    // vector<vector<int>>dp(n,vector<int>(4,-1)); //n rows for days and 4 colums for task 0,1,2,3
    // return f(n-1,3,points,dp);
}