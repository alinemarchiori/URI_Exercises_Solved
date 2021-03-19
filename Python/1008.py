from decimal import Decimal
numero = int(input(""))
horas = int(input(""))
valorporhora = float(input(""))
valortotal = horas*valorporhora
valortotal = Decimal("%.2f" % valortotal)
print("NUMBER = " + str(numero))
print("SALARY = U$ " + str(valortotal))