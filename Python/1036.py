a, b, c = [float(x) for x in input().split()]
delta = ((b**2)-4*a*c)
if(delta>=0 and (2*a)!=0):
    delta = delta ** (1/2)
    r1 = (-b + delta)/(2*a)
    r2 = (-b - delta)/(2*a)
    print("R1 = {:.5f}".format(r1))
    print("R2 = {:.5f}".format(r2))
else:
    print("Impossivel calcular")