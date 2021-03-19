from decimal import Decimal 
A = float(input(""))
B = float(input(""))
C = float(input(""))
media = ((A*2)+(B*3)+(C*5))/10
m = Decimal("%.1f" % media)
print("MEDIA = " + str(m))