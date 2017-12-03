Proceso ClasificacionDeNumeros
	Escribir 'Hola. Introdusca la cantidad de numeros que va a evaluar:'
	Leer n
	Escribir 'Introdusca los numeros:'
	i<-0
	pos<-0
	neg<-0
	cer<-0
	Para i<-0 Hasta n-1 Hacer
		Escribir 'Digite un numero ENTERO para clasificarlo...'
		Leer num
		Si num>0 Entonces
			Escribir 'El numero es positivo'
			pos<-pos+1
		Sino
			Si num<0 Entonces
				Escribir 'El numero es negativo'
				neg<-neg+1
			Sino
				Escribir 'El numero es cero'
				cer<-cer+1
			FinSi
		FinSi
		Escribir 'El numero es'
		Escribir num
		Escribir ''
	FinPara
	Escribir 'La cantidad de numeros POSITIVOS es'
	Escribir pos
	Escribir 'La cantidad de numeros NEGATIVOS es'
	Escribir neg
	Escribir 'La cantidad de numeros iguales a CERO es'
	Escribir cer
	Escribir 'La cantidad de numeros analisados fue'
	Escribir n
FinProceso

