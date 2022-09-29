class Solution {
public:
    // 3 -> Forbidden pos
    // 2 -> visited by forward move
    // 1 -> visited by backward move 
    // 0 -> not visited
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        unordered_map<int,int> m;
        for(auto x:forbidden)
            m[x]=3;
        
        int maxnum=10000;
        queue<pair<int,int>> q;
        q.push({0,0});
        int res=0;
        m[0]=1;
        while(!q.empty())
        {
            int j=q.size();
            for(int i=0;i<j;i++)
            {
                auto p=q.front();
                q.pop();
                if(p.first==x)
                    return res;
                
                // <2 means either not visited or visited by backward move, so we can do a forward move
                if(p.first+a<=maxnum && m[p.first+a]<2)
                {
                    m[p.first+a]=2;
                    q.push({p.first+a,0});
                }
                if(p.first-b>0 && m[p.first-b]==0 && p.second==0)
                {
                    m[p.first-b]=1;
                    q.push({p.first-b,1});
                }
            }
            res++;
        }
        return -1;
    }
};