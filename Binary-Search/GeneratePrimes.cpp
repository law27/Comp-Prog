
bool isPrime(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}

vector<int> solve(int n) {
    vector<int> ans;
    if(n < 2) {
        return ans;
    }
    ans.push_back(2);
    for(int i = 3; i <= n; i++) {
        if(isPrime(i)) {
            ans.push_back(i);
        }
    }
    return ans;
}
