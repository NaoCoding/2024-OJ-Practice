for i in range(int(input())):
    a = int(input())
    check = -1
    cons = 0
    height = 0
    ss = [int(x) for x in input().split()]
    l = []
    for x in ss:
        if x > a:
            cons = 1
            break
        if check == -1:
            check = x
            height = 1
            continue
        if check > x:
            for j in range(check-x):
                l.append(height)
            check = x
 
        height += 1
 
    if cons == 1:
        print('no')
    else:
        while len(l) < a:
            l.append(height)
        ss.reverse()
        if ss == l:
            print('yes')
        else:
            print('no')
