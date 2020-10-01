class RecentCounter {
    vector<int>vect;
public:
    RecentCounter() {

    }

    int ping(int t) {
        vect.push_back(t);
        int no_requests = 0;
        int leftrange = t - 3000;
        for (int i = 0; i < vect.size(); i++) {
            if (leftrange > vect[i]) {
                no_requests++;
            }
            else {
                break;
            }
        }
        return vect.size() - no_requests;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
