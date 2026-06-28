class RecentCounter {
private:
    queue<int> q; // store timestamps
    
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        q.push(t);
        
        // Remove all requests older than t - 3000
        while (!q.empty() && q.front() < t - 3000) {
            q.pop();
        }
        
        return q.size();
    }
};
