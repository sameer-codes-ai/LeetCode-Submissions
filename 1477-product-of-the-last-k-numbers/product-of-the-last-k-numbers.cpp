class ProductOfNumbers {
public:
    vector<int> ans;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        ans.push_back(num);
    }
    
    int getProduct(int k) {
        int a=1;
        for(int i=ans.size()-1;i>=0 && k>0; i--,k--){
            a*=ans[i];
        }
        return a;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */