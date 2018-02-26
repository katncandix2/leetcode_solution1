
/*728. Self Dividing Numbers
A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

Also, a self-dividing number is not allowed to contain the digit zero.

Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible.

Example 1:
Input: 
left = 1, right = 22
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
Note:

The boundaries of each input argument are 1 <= left <= right <= 10000.*/


/**
 * 题解
 * 1.首先实现获取数字每一位对应数字（通过类型转换截取到各个位上的数字十位百位个位）
 * 2.设置随机变量记录整除结果 
 * 3.判断整除结果若符合则进行push_back
 */
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> out;
        
        for(int i=left; i < right+1; i++){
            int res = 0;
            
            std::string repr = std::to_string(i);
            
            for(char &digit : repr){
                int num = digit  - '0';
                if(num) res += ( i % num );
                else res += 1;
            }
            
            if(res == 0) out.push_back(i);
        }
        
        return out;
    }
};