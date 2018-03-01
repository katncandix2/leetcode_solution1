/*412. Fizz Buzz
DescriptionHintsSubmissionsDiscussSolution
Pick One
Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

Example:

n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
*/
/**
 * 题解:
 * 1.简单的string使用考察题目 与之前的获取位上数字题目类似
 * 2.但是本地实际编译成功 运行报错很诡异
 */
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret_vec(n);
        for(int i=1; i<=n; ++i)
        {
            if(0 == i%3)
            {
                ret_vec[i-1] += "Fizz";
            }
            if(0 == i%5)
            {
                ret_vec[i-1] += "Buzz";
            }
            if(ret_vec[i-1].empty())
            {
                ret_vec[i-1] += to_string(i);
            }
        }
        return ret_vec;
    }
};