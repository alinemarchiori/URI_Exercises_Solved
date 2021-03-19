from decimal import Decimal
primeiro=float(input(""))
segundo=float(input(""))
media=((primeiro*3.5)+(segundo*7.5))/11
decimal = Decimal("%.5f" % media)
print("MEDIA = " + str(decimal))