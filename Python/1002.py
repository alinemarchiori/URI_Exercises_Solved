from decimal import Decimal
raio = float(input(""))
area = 3.14159*(raio*raio)
d= Decimal("%.4f" % area)
print("A="+str(d))