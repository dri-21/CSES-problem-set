#You are given all numbers between 1,2 ldots,n except one. Your task is to find the missing number
n = int(input())
arr = list(map(int, input().split()))

total = n * (n + 1) // 2
missing = total - sum(arr)

print(missing)
