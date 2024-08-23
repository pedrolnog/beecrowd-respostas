codProd1, numProd1, precoProd1 = input().split()
codProd2, numProd2, precoProd2 = input().split()

valorTotal = (int(numProd1) * float(precoProd1)) + (int(numProd2) * float(precoProd2))

print("VALOR A PAGAR: R$ {:.2f}".format(valorTotal))

# One-liner
# print("VALOR A PAGAR: R$ {:.2f}".format((int(numProd1) * float(precoProd1)) + (int(numProd2) * float(precoProd2))))
