create database teste;

use maicon;

create table usuario (

      id_usuario int primary key auto_increment,
      loguin varchar(50) not null,
      senha varchar(50) not null
);

create table categoria (

       id_categoria int primary key auto_increment,
       nome varchar(50)
);

create table publicacao (

	    id_publicacao int primary key auto_increment,
        descricao varchar(50),
        i_usuario int,
        i_categoria int,
        foreign key (i_usuario) references usuario(id_usuario),
        foreign key (i_categoria) references categoria(id_categoria)
);

insert into usuario
 (loguin, senha)
 values ("Bruno", 4);
 
insert into usuario
 (loguin, senha)
 values ("Maria", 5);
 
insert into publicacao
(descricao, i_usuario, i_categoria)
values ("Ola", 5, 5);

 insert into publicacao
 (descricao, i_usuario, i_categoria)
 values ("Oi", 5, 6);
 
 insert into publicacao
 (descricao, i_usuario, i_categoria)
 values ("Ola mundo", 6, 5);

insert into categoria
values ("Noticia");
 
 insert into categoria
 values ("Esporte");
 
select loguin
from usuario;

select *
from publicacao
where i_usuario = 5;

select i_usuario, count(id_publicacao) as quantidade_publicacao, i_categoria 
from publicacao p inner join categoria c
on p.i_categoria = c.id_categoria
where i_categoria = 5
group by i_usuario;
