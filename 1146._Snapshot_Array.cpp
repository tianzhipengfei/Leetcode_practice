class SnapshotArray {
private:
    int _snap_id = 0;
    vector<map<int, int>> num_list;
public:
    SnapshotArray(int length) : num_list(length) {
        _snap_id = 0;
    }
    
    void set(int index, int val) {
        num_list[index][_snap_id] = val;
    }
    
    int snap() {
        _snap_id ++;
        return _snap_id - 1;
    }
    
    int get(int index, int snap_id) {
        while(snap_id>=0){
            if(num_list[index].count(snap_id) > 0){
                return num_list[index][snap_id];
            } else{
                snap_id --;
            }
        }
        return 0;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
