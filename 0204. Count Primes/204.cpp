class Solution {
public:
    int countPrimes(int n) {
        
        int count = 0;
        vector<bool> v(n+1, true); // creating a boolean vector of all elements and marking them true( considering all elements are prime)
        
        v[0] = v[1] = false; // 0 and 1 are non-prime
            
        for(int i=2; i<n; i++) { 
            
            if(v[i]) {
                count++;
                
                for(int j=2*i; j<n; j=j+i) {
                    v[j] = 0;   // marking all multiples as 0
                }
            }
        }
        return count;
    }
};
// this is Sieve of Eratosthenes
// harmonic progression of prime number = log(log(n))
// time complexity = O( n*log(log(n)) )