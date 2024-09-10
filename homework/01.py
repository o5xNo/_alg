def power(n):
    dp=[0]*(n+1)
    dp[0]=1

    for i in range(1,n+1):
        dp[i]=dp[i-1]+dp[i-1]
    return dp[n]

def main():
    n=int(input())
    print(f"2^{n}={power(n)}")

if __name__ == "__main__":
    main()
