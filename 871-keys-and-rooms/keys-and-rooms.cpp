class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& v) {
        int n=v.size(); //no. of room
        queue<int>q;
        q.push(0);
        vector<bool> visited(n, false);
        visited[0]=true;
        while(q.size()>0){
            int x=q.front();
            q.pop();
            for(int i=0;i<v[x].size();i++){
                int room = v[x][i];

                if(!visited[room]) {
                    visited[room] = true;
                    q.push(room);
                }
            }
        }
        for(int i = 0; i < n; i++) {
            if(!visited[i]) return false;
        }
        return true;

    }
};