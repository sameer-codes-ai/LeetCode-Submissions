class Twitter {
public:
    unordered_map<int, vector<int>> follows;
    vector<pair<int,int>> tweets;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweets.push_back({userId,tweetId});
    }
    
    bool followsUser(int us1, int us2){
        for(int i:follows[us1]){
            if(i==us2)return true;
        }
        return false;
    }

    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        int c=0;
        for(int i=tweets.size()-1;i>=0;i--){
            if(followsUser(userId,tweets[i].first) || tweets[i].first==userId){
                ans.push_back(tweets[i].second);
                c++;
            }

            if(c==10)break;
        }

        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        follows[followerId].push_back(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        vector<int> foll(follows[followerId]);
        for(int i=0;i<foll.size();i++){
            if(foll[i]==followeeId){
                follows[followerId].erase(follows[followerId].begin()+i);
                break;
            }
        }
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */