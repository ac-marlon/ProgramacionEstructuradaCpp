Proceso MCDyMCM
	Dividendo<-0
	Divisor<-0
	Residuo<-0
	Mcm<-0
	Escribir 'Digite A y B'
	Leer A,B
	Si B<>0 Entonces
		Dividendo<-A
		Divisor<-B
		Residuo<-Dividendo MOD Divisor
		Mientras Residuo>0 Hacer
			Dividendo<-Divisor
			Divisor<-Residuo
			Residuo<-Dividendo MOD Divisor
		FinMientras
		Mcm<-A*B/Divisor
		Escribir 'El m�ximo com�n divisor es=',Divisor
		Escribir 'El m�nimo com�n m�ltiplo es=',Mcm
	Sino
		Escribir 'El m�nimo com�n m�ltiplo (MCM) y m�ximo com�n divisor (MCD) es 0'
	FinSi
FinProceso

