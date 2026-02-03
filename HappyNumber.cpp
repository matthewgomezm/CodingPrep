class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> myBag;
        while(n != 1)
        {
            if(myBag.count(n)) //checks if n already exists for infinite loop
                return false;
            
            int squareSum = 0;
            myBag.insert(n); //insert n into set.
            while (n>0)
            {
                int digit = n%10; //grabs last digit
                squareSum += digit*digit;
                n /= 10; // now grabs first digit
            }

            n = squareSum;
        }
        return n == 1;
    }
};
