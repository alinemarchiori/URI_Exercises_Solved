item, quantidade = [float(x) for x in input().split()]
if(item == 1):
    valor = quantidade*4.0
if(item == 2):
    valor = quantidade*4.5
if(item == 3):
    valor = quantidade*5.0
if(item == 4):
    valor = quantidade*2.0
if(item == 5):
    valor = quantidade*1.5
print("Total: R$ {:.2f}".format(valor))