//https://www.hackerrank.com/challenges/number-groups/problem

long sumOfGroup(int k) {
    // Return the sum of the elements of the k'th group
    long sum=0;
    long  j = pow(k,2) -k +1;
    for (int i=0 ;i< k;++i,j+=2 )  {
     sum+= j;
     }
    return  sum;
}
