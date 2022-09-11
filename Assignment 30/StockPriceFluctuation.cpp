class StockPrice {
    multimap<int, int> p;
    map<int, multimap<int, int>::iterator> t;
    
public:
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if(t.count(timestamp) == 0) {
            t[timestamp] = p.insert(make_pair(price, timestamp));
        }
        else {
            p.erase(t[timestamp]);
            t[timestamp] = p.insert(make_pair(price, timestamp));
        }
    }
    
    int current() {
        return t.rbegin()->second->first;
    }
    
    int maximum() {
        return p.rbegin()->first;
    }
    
    int minimum() {
        return p.begin()->first;
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */