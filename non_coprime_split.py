def min_div(n):
    for i in range(2,round(n ** 0.5)+1):
        if n%i==0:
            return i;
    return n

for _ in range(int(input())):
    l,r = map(int, input().split())
    for i in range(l,r+1):
        md = min_div(i)
        if md!=i:
            print(md,i-md)
            break
    else:
        print(-1)
        