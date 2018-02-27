/*476. Number Complement
DescriptionHintsSubmissionsDiscussSolution
Pick One
Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

Note:
The given integer is guaranteed to fit within the range of a 32-bit signed integer.
You could assume no leading zero bit in the integer’s binary representation.
Example 1:
Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
Example 2:
Input: 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.*/

/**
 * 题解：
 *
 * 常规思路
 * 1.将输入数字转为二进制 5 => 101
 * 2.将对应二进制进行取反 101 =>010
 * 3.将对应二进制转为十进制后输出
 *
 * ------------------------------------
 * 1.声明最大无符号int 数字  mask此刻为 1111,1111（举例）
 * 2.此时若我们输入的数字是 5 => 101   while循环之后 mask 由 1111,1111 => 1111,1000
 * 3.~mask => 0000,0111 , ~num => 010 ;
 * 
 */
class Solution {
public:
    int findComplement(int num) {
        unsigned int mask = ~0;
        while (num & mask){
            mask <<= 1;  
        } 

        return ~mask & ~num;
    }
};