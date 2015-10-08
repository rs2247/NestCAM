- NestCAM inteligente: 
	
	Descrição: 
		
		Uma camera que vigia a entrada do ap e reconhece quando um dos 
		moradores entrou ou saiu, "aprendendo" a rotina de cada um
		
	Goals:
		
		1st:
		- Camera deve reconhecer as faces dos moradores que entram pela porta
		- Deve ser possivel acessar o video pela internet
		- Processamento de imagem deve ser local na odroid
		- Gerar um relatorio sobre quando cada morador entrou ou saiu
		- Indicar na internet quem esta no ap em cada momento 
		- Dar as boas vindas a cada morador que entrar			

		2nd:
		
		O que fazer com os dados obtidos e processados? (carteacoes)
			- Calcular em quanto tempo chegará um novo morador (?)
			- Calcular a probabilidade do ap estar vazio em cada instante de tempo
			- Aprender em quando ligar e desligar o ar condicionado em cada dia da semana
			  com base na rotina aprendida dos moradores do quarto

	Etapas (main):
	
		- Instalar ubuntu na odroid
			- ser capaz de acessar ela via SSH	

		- Capturar o video da webcam pela odroid
			- compilar um programa simples com cmake
			- capturar frames com openCV

		- Configurar o servidor na odroid
			- Definir o que será acessado pela internet
				- Mostrar quem está no ap em cada instante de tempo
				- Mostrar o stream da camera em real-time (?)	

		- Desenvolver o algoritmo para reconhecimento de face
			- inicialmente usar alguma função pronta do openCV
	
		- Reconhecer a face de cada um dos moradores de maneira "satisfatória" 
			- GAGA
		
	 	- Gerar os relatórios diários sobre quem entrou/saiu do ap em cada horário
	
		



	
