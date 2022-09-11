struct comp {
 bool operator()(const pair<int, string> &a, const pair<int, string> &b) const 
    { 
        if(a.first==b.first)
        {
            return a.second>b.second;
        }
        return a.first<b.first;
    }
};

class FoodRatings {
public:
    map<string, int> map1; 
    map<string, set<pair<int, string>, comp>> map2;
    map<string, string> map3;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n=foods.size();
        for(int i=0; i<n; i++)
        {
            map1[foods[i]]=ratings[i];
            map2[cuisines[i]].insert({ratings[i], foods[i]});
            map3[foods[i]]=cuisines[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        map2[map3[food]].erase({map1[food], food});
        map2[map3[food]].insert({newRating, food});
        map1[food]=newRating;
    }
    
    string highestRated(string cuisine) {
        return (*--map2[cuisine].end()).second;
    }
};