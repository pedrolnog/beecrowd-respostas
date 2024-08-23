numeroFuncionario = int(input())
horasTrabalhadas = int(input())
valorPorHora = float(input())

print(f"NUMBER = {numeroFuncionario}")
print("SALARY = U$ {:.2f}".format(horasTrabalhadas * valorPorHora))

## One-liner
# Entre o número de funcionário, horas trabalhadas e o valor por hora
# print(f"NUMBER = {int(input())}" + "SALARY = U$ {:.2f}".format(int(input()) * float(input())))
