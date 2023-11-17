Algoritmo Consigna_1
	Escribir 'Vamos a calcular el modulo y el angulo de un numero complejo'
	Escribir 'Ingrese primero la parte real'
	Leer real
	Escribir 'Ahora ingrese la parte imaginaria'
	Leer imaginaria
	M <- RAIZ (real*real) + (imaginaria*imaginaria)
	A = ATAN (imaginaria/real)
	Escribir "Su modulo es: " , A
	Escribir "Su angulo es: " , M
FinAlgoritmo
