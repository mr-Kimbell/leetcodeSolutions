// Complement of Base 10 Integer

// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         int i=0,ans=0;
//         if(n==0) return 1;
//         while(n){
//             int bit=n&1;
//             if(bit==0){
//                 ans+=pow(2,i);
//             }
//             i++;
//             n=n>>1;
//         }
//         return ans;
//     }
// };

// using xor(^)                 [Fastest among all]
// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         if(n==0) return 1;
//         int x=1;
//         while(x<=n){
//             n=x^n;
//             x<<=1;
//         }
//         return n;
//     }
// };

// using not(~)

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int m=n;
        int mask=0;
        while(m){
            mask= (mask<<1) | 1;
            m= m>>1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};
