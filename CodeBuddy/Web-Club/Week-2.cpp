//Problem: https://www.interviewbit.com/problems/stairs/
int Solution::climbStairs(int A) {
    long long a[40];
    int i;
    a[1]=1;
    a[2]=2;
    for(i=3;i<=36;i++)
    {
        a[i] = a[i-1]+a[i-2];
    }
    return a[A];
}
