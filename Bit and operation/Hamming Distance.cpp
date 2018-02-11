
// 461. Hamming Distance
/*Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.*/
class Solution {
public:

    /**
     * 题解1:
     * 1.获取两个数字中最大的那个
     * 2.截取两个数字末尾数字(1/0)
     * 3.循环比较若不是则count++
     * 4.去除两个数字的最后一位  时间复杂度 O(N)(N>M)
     * 
     */
    int hammingDistance(int x, int y) {
        int max = x>=y?x:y;
        int min = x<y?x:y;
        int minOffset = min&1;
        int maxOffset = max&1;
        int count = 0;
        while(max!=0){
            if(maxOffset!=minOffset){
                ++count;
            }
        
            min /=2;
            max /=2;
            minOffset =min&1;
            maxOffset =max&1;
        }
        return count;
    }

    /**
     * 题解2:不是很容易想到！
     * 1.异或筛去x y 中重复数组
     * 2.循环仅统计异或后1的个数
     * example x= 3 ,y =10 x^y = 9 = 1001
     * 9 & 8 = 1;
     */
    /*int dist = 0, n = x ^ y;
        while (n) {
            ++dist;
            n &= n - 1;
        }
    return dist;*/
};