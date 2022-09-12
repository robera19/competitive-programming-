class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i=0;
        vector<string> answer;
         int num=1;
        while(i<n){
        if(num%3==0&&num%5!=0)
        {
            answer.push_back("Fizz");
        }
        else if(num%5==0&&num%3!=0)
            {
                answer.push_back("Buzz");
            }
            else if(num%5==0&&num%3==0)
            {
                answer.push_back("FizzBuzz");
            }
        else
        {
            answer.push_back(to_string(num));
        }
            i++;
            num++;
       
    }
     return answer;   
    }
    
};
