class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ans;
        if(A.size() == 0){
            return ans;
        }
        if(A[0] >=0){
            for (int i = 0; i < A.size(); i++){
                ans.push_back(A[i]*A[i]);
            }
            return ans;
        } else if(A[A.size()-1] <= 0){
            for (int i = A.size() - 1; i >= 0 ; i--){
                ans.push_back(A[i]*A[i]);
            }
            return ans;
        } else{  
            int band = 0;
            int left = 0;
            int right = A.size() - 1;
            while (left <= right) {
                int mid = (left + right) / 2;
                if (A[mid] < 0 && A[mid+1] >= 0) {
                    band = mid;
                    break;
                }
                else if (A[mid] < 0 && A[mid+1] < 0) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
            // cout<<band<<endl;
            left = band;
            right = band+1;
            int cou = 0;
            int flag = 0;
            while(cou < A.size()){
                if(left < 0 || right >= A.size()){
                    flag = 1;
                    break;
                }
                if(abs(A[left]) < A[right]){
                    ans.push_back(A[left] * A[left]);
                    left--;
                } else{
                    ans.push_back(A[right] * A[right]);
                    right++;
                }
                cou++;
            }
            if(flag){
                if(left>=0){
                    while(left>=0){
                        ans.push_back(A[left]*A[left]);
                        left--;
                    }
                } else{
                    while(right<A.size()){
                        ans.push_back(A[right]*A[right]);
                        right++;
                    }
                }
            }
        }
        return ans;
    }
};
