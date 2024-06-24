for i in range(int(input())):
    a = int(input())
    b = input()
    c = [x for x in input().split()]
    c.sort()
    c.sort(key=lambda x:x[1])
    idx = 0
    used = [0]*(2*a)
    d = []
    her = 0
    p = []
 
    while idx < 2*a:
        if c[idx][1] == b:
            p.append(c[idx])
            idx += 1
            her += 1
 
 
        else:
            if idx == 2*a-1:
                idx += 1
                continue
            if c[idx][1] == c[idx+1][1]:
                used[idx] = 1
                used[idx+1] = 1
                d.append([c[idx],c[idx+1]])
                idx += 2
            else:
                idx += 1
    #print(p,used)
    if her < 2*a - sum(used) - her:
        print("IMPOSSIBLE")
    else:
        for j in d:
            print(" ".join(j))
 
        for j in range(a*2):
            if used[j]:
                continue
            if c[j][1] == b:
                continue
            else:
                print(c[j],p.pop())
        for j in range(0,len(p),2):
            print(p[j],p[j+1])
