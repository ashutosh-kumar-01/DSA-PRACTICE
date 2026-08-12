// kth smallest element in a sorted matrix 

// class Solution {
// public:
// // Tc : n * (log n) * log(range)
//     int countLessEqual(vector<int>&row, int x){
//        int low = 0, high = row.size();
//        // Find the first element > x (upper bound).
//        // Its index equals the number of elements <= x.
//        while(low < high){
//         int mid = low + (high - low) / 2;
//         // if its greater than the mid, we point high to mid eliminating the search space on the right
//         // also because the mid is still an candidate here
//         if(row[mid] > x) high = mid;
//         // when its <= x, move the low just after the smallest or equal element 
//         else low = mid + 1;
//        }
//        // at the end low represents the index of the element > x 
//        // which the count of how many elements are <= x
//        return low;
//     }
//     int kthSmallest(vector<vector<int>>& matrix, int k) {
//         // A value x is large enough to be the kth smallest
//         // if at least k elements are <= x.
//         if(matrix.size() <= 1) return matrix[0][0];
//         int n = matrix.size();
//         // the search space belongs from the minimum element to the maximum element
//         int low = matrix[0][0], high = matrix[n-1][n-1];
//         while(low < high){
//             // mid is the candidate VALUE for the kth smallest element.
//             long long mid = low + (high - low) / 2;
//             // check in total how many elements are smaller or equal to mid (<=)
        
//             int totalCnt = 0 ;
//            // Every row contributes independently to the total count.
//            // Even if one row is fully <= mid,
//            // later rows may still contain additional elements <= mid.
//             for(auto row : matrix){
//                 totalCnt +=  countLessEqual(row, mid);
//             }
//             // if its lesser than k, then its too small for to have atleast k elememts smaller than it
//             if(totalCnt < k){
//                 low = mid + 1;
//             }
//             // using the lowerbound property
//             // if its greater than or equal to k then the mid should be smaller
//             else{
//                 high = mid;
//             }
//         }
//         return low;
//     }

// };


class Solution {
private:
    int helper(vector<vector<int>>&matrix , int mid ){
        int count = 0 ;
        int n = matrix.size();
        int row = 0 ;
        int col = n - 1 ;  
        while(row < n  && col >= 0){
            if(matrix[row][col] <= mid){
                count += (col + 1 );
                row ++ ;
            }else{
                col -- ;
            }
        }
        return count;
    }
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int low = matrix[0][0] ;
        int high = matrix[n-1][n-1] ; 
        int res = -1;
        while(low <=high){
            int mid = low + (high - low)/2;
            if(helper(matrix,mid) >= k){
                res = mid;
                high = mid - 1 ;
            }else{
                low = mid + 1 ;
            }
        }
        return res;
    }
};