"""
Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

Input Sample
556
Output Sample
0:9:16
"""

tempoSegundos = int(input())

tempoHoras = tempoSegundos // 3600
tempoMinutos = (tempoSegundos % 3600) // 60
tempoSegundos = (tempoSegundos % 3600) % 60

print(f"{tempoHoras}:{tempoMinutos}:{tempoSegundos}")