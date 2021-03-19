from decimal import Decimal 
A, B, C = input().split(" ")
A = float(A)
B = float(B)
C = float(C)
triangulo = (A*C)/2
circulo = 3.14159*(C*C)
trapezio = ((A+B)*C)/2
quadrado = B*B
retangulo = A*B
triangulo = Decimal("%.3f"%triangulo)
circulo = Decimal("%.3f"%circulo)
trapezio = Decimal("%.3f"%trapezio)
quadrado = Decimal("%.3f"%quadrado)
retangulo = Decimal("%.3f"%retangulo)
print("TRIANGULO: " + str(triangulo))
print("CIRCULO: " + str(circulo))
print("TRAPEZIO: " + str(trapezio))
print("QUADRADO: " + str(quadrado))
print("RETANGULO: " + str(retangulo))