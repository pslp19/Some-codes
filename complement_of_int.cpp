class Solution {
public:
    int bitwiseComplement(int N) {
        if(!N)return 1;
        int num=floor(log2(N))+1;
        int tot=pow(2,num)-1;
        return tot-N;
    }
};
