#5% de erro
from functools import reduce
n = int(input())
for i in range(n):
    valores = 0
    m = input().split()
    t = [int(x) for x in m]
    media = reduce(lambda x,y: x+y, t)//int(m[0])
    valores = [valores+1 for x in m if int(x) >= media]
    print("{:.3f}%".format(((reduce(lambda x,y: x+y, valores)/int(m[0]))*100)))
    