Proceso SerieDeFibonacci
	num1<-0
	num2<-1
	term<-1
	Escribir 'Programa para hallar la Sucesion de Fibonacci hasta el n-simo termino'
	Escribir ' '
	Escribir 'Intoduzca el termino hasta el cual quiere representar la sucesion'
	Escribir ' '
	Escribir 'El termino de la sucesion es: '
	Leer n
	Escribir ' '
	Escribir 'Y la sucesion hasta ese termino es: '
	Para i<-1 Hasta n Hacer
		term<-num1+num2
		Escribir ' '
		Escribir i,'. ',term
		num1<-num2
		num2<-term
	FinPara
	Escribir ' '
FinProceso

