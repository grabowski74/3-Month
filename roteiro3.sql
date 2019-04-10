-- Roteiro 3

CREATE TYPE ESTADO_NE AS ENUM ('PB', 'PE', 'PI', 'RN', 'CE', 'MA', 'BA', 'AL', 'SE');

CREATE TABLE farmacias (
	nome TEXT,
	id INTEGER,
	tipo TEXT,
	bairro TEXT UNIQUE,
	cidade TEXT,
	estado ESTADO_NE,
	gerente TEXT,
	CONSTRAINT farmacia_id PRIMARY KEY(id),
	CONSTRAINT tipo_nome CHECK(tipo = 's' OR tipo = 'f'),
	CONSTRAINT tipo_farmacia EXCLUDE USING gist (tipo with=) WHERE (tipo = 's'),
	CONSTRAINT gerente_farmacia_fkey FOREIGN KEY(gerente) REFERENCES funcionarios(cpf),
	
);

CREATE TABLE funcionarios (
	nome TEXT,
	cpf TEXT,
	atividade TEXT,
	unidade TEXT,
);

CREATE TABLE medicamentos (
	nome TEXT,
	fabricante TEXT,
	dosagem TEXT,
	tipo TEXT
	lote TEXT,
	preco TEXT
);

CREATE TABLE vendas (
	saidas TEXT,
	entradas TEXT,
	impostos TEXT,
	lucro TEXT
	funcionario TEXT,
	cliente TEXT,
);

CREATE TABLE entregas (
	qnt TEXT,
	valor TEXT,
	distancia TEXT,
	endereco TEXT
);

CREATE TABLE clientes (
	nome TEXT,
	cpf TEXT,
	data_nasc TEXT,
	cidade TEXT,
	estado TEXT,
	valor_comprado TEXT,
	tipo_endereco TEXT,
	idade INTEGER
);
