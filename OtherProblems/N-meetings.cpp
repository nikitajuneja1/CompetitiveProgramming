/*There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is start time of meeting i and F[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time? Also note start time of one chosen meeting can't be equal to the end time of the other chosen meeting.
*/
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool myComp(pair<int,int>a,pair<int,int>b)
    {
        return a.second<b.second;
    }

    int maxMeetings(int start[], int end[], int n) {
    vector<pair<int,int>>v;
    
    for(int i=0;i<n;i++)
    {
        v.push_back({start[i],end[i]});
    }
    sort(v.begin(),v.end(),myComp);
    int prev=0;
    int max=1;
    for(int cur=1;cur<n;cur++)
    {
        if(v[cur].first>v[prev].second)
        {
            max++;
            prev=cur;
        }
    }
    return max;
    }
};
