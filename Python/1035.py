A, B, C, D = [int(x) for x in input().split()]
if(A%2==0 and B>C and D>A and ((C+D)>(A+B)) and C>0 and D>0):
    print("Valores aceitos")
else:
    print("Valores nao aceitos")