nomeFuncionario = input()
bonus = float(input())
salario = float(input())

print("TOTAL = R$ {:.2f}".format(bonus + (salario * 0.15)))

# One-liner
# print("TOTAL = R$ {:.2f}".format(float(input()) + (float(input()) * 0.15)))
