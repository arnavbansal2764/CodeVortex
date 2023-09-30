def armstrong(x):
    a = str(x)
    sum = 0
    for i in range(0,len(a)):
        sum = sum + (int(a[i])**3)
    if(sum == x):
        return True
    else:
        return False

for a in range(1,501):
    if(armstrong(a)):
        print(a)
