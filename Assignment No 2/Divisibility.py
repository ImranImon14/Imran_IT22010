n = int(input())
a = list(map(int,input().split()))

if a[-1] % 10 == 0:
    print("Yes")
else:
    print("No")
