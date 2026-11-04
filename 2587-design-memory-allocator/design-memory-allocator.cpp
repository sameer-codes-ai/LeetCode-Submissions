class Allocator {
public:
    
    vector<int> mem;
    Allocator(int n) {
        mem=vector<int>(n,0);
    }
    int allocate(int size, int mID) {
        int nn=mem.size();
        int s=0,c=0;
        for(int i=0;i<nn;i++){
            if(mem[i]==0){
                s=i;
                while(i<nn && mem[i]==0){
                    // cout<<mem[i]<<" "<<c<<"\n";
                    c++;
                    i++;
                }
                if(c>=size){
                    for(int i=s;i<s+size;i++){
                        mem[i]=mID;
                    }
                    return s;
                }else c=0;
            }
        }
        return -1;
    }
    
    int freeMemory(int mID) {
        int nn=mem.size();
        int c=0;
        for(int i=0;i<nn;i++){
            if(mem[i]==mID){
                c++;
                mem[i]=0;
            }
        }
        return c;
    }
};

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->freeMemory(mID);
 */