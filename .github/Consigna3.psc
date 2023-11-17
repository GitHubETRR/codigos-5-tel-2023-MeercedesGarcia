Algoritmo consigna3
	Escribir "Comenzamos sumando dos números complejos en forma rectangular"
	Escribir "Por aca ingrese la primer parte R1 y R2 de los numeros complejos"
	Leer R1
	Leer R2
	Escribir "Y acá ingrese la parte I1 y I2 de los numeros complejos"
	Leer I1
	Leer I2
	Rfinal = R1+R2
	Ifinal = I1+I2
	Escribir "Ingresa el numero 1 si queres el resultado de forma polar o ingresar cualquier otro numero si queres que se muestre en forma binomica"
	Leer var
	Si var=1 Entonces
		modulo = RC(Rfinal^2+Ifinal^2)
		Escribir "Tu modulo es" , modulo
		argumento = Atan(Rfinal/Ifinal)*180/PI
		Escribir "Tu argumento es" , argumento
	SiNo
		Escribir "Tu parte real es" , Rfinal
		Escribir "Tu parte imaginaria es" , Ifinal
	FinSi
	Escribir "Muchas gracias por trabajar sobre este programa"
FinAlgoritmo
