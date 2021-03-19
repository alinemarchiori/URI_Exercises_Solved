from decimal import Decimal 
raio = int(input(""))
total = ((4/3)*3.14159*(raio*raio*raio))
total = Decimal("%.3f"%total)
print("VOLUME = " + str(total))