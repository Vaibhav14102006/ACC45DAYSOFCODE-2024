# cook your dish here
# cook your dish here
t = int(input())
for i in range(t):
    B1,B2,B3 = map(int,input().split())
    x = B1+B2+B3
    if x>=2:
        print("Not now")
    else:
        print("Water filling time")