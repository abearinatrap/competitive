#include <bits/stdc++.h>
using namespace std;
 
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    vector<bool> prime(n+1,true);
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    int ca = 0;
    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p]){
            ca++;
            cout << p << ",";
            if(ca>20005){
                return;
            } 
       }
}
 
// Driver Program to test above function
int main()
{
    int n = 224837;
    SieveOfEratosthenes(n);
    return 0;
}