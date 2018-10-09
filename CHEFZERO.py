n,m,k=map(int,input().split())
for i in range(n):
    l=list(map(int,input().split()))
arr=[]
for i in range(n):
    p=[]
    for j in range(m//2+1):
        p.append(1)
    for j in range(m//2+1,m):
        p.append(2)
    arr.append(p)
for i in range(len(arr)):
    for j in range(len(arr[i])):
        print(arr[i][j],end=' ')
    print()
# 3 3 2
# 1 10 3
# 2 5 3
# 3 1 1
