from decimal import Decimal 
codigo1, numero1, valor1 = input().split(" ")
codigo1 = int(codigo1)
numero1 = int(numero1)
valor1 = float(valor1)
codigo2, numero2, valor2 = input().split(" ")
codigo2 = int(codigo2)
numero2 = int(numero2)
valor2 = float(valor2)
total = ((numero1*valor1)+(numero2*valor2))
total = Decimal("%.2f"%total)
print("VALOR A PAGAR: R$ "+str(total))