
// 771. Jewels and Stones
/*You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0
Note:

S and J will consist of letters and have length at most 50.
The characters in J are distinct.*/
class Solution {
public:
    int numJewelsInStones(string J, string S) {

        /**
         * 题解1:循环！
         * 1.由于J 串唯一 
         * 2.那么循环遍历J S O(m*n)的时间复杂度便可统计出 宝石的数量
         */
        
        /*int sum = 0;
        for(int i = 0;i<J.size();++i){
            for(int j = 0;j<S.size();++j){
                if(J[i]==S[j]){
                   ++sum;
                }   
            }
        }
            return sum;*/
        

        /**
         * 题解2:使用stl set
         * 1.消耗额外空间将J循环放入 set 集合中
         * 2.循环O(m) 进行判断操作 
         */
        int res = 0;
        set<char> setJ(J.begin(), J.end());
        for (char s : S) if (setJ.count(s)) res++;
        return res;
    }
};