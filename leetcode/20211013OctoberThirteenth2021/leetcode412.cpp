#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        for(int i=1;i<=n;i++) {
            if(i%5==0&&i%3==0) {
                ret.push_back("FizzBuzz");
            }else
            if(i%3==0) {
                ret.push_back("Fizz");
            }else
            if(i%5==0) {
                ret.push_back("Buzz");
            }else {
                ret.push_back(std::to_string(i));
            }
        }
        return ret;
    }
};

//without solution
//13:52.6 Debug +00:50.7