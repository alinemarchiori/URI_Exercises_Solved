from decimal import Decimal
nome = str(input(""))
salariofixo = float(input(""))
totaldevendas = float(input(""))
total = ((totaldevendas*15)/100)+salariofixo
total = Decimal("%.2f"%total)
print("TOTAL = R$ " + str(total))