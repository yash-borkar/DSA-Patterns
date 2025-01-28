class Solution {
public:
    int square(int n){
        int ans = 0;
        while(n){
            int rem = n % 10;
            ans += rem*rem;
            n /= 10;
        }
        return ans;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        //while loop is not used here because initially slow and 
        //fast pointer will be equal, so the loop won't run.
        do{
            slow = square(slow);
            fast = square(square(fast));
        }while(slow != fast);

        return slow == 1;  
    }
};