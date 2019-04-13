function iniciaJogo(){

    var url = window.location.search;

    var nivelJogo = url.replace("?", "");

    var tempoSegundos = 0;

    if(nivelJogo == 1){
        tempoSegundos = 120;
    } else if(nivelJogo == 2){
        tempoSegundos = 60;
    } else if(nivelJogo == 3){
        tempoSegundos = 30;
    }

    document.getElementById('cronometro').innerHTML = tempoSegundos;

    var qtdBaloes = 10;

    criaBaloes(qtdBaloes);
}

function criaBaloes(qntBaloes){
    for(var i = 1; 1 <= qntBaloes; i++){
        var balao = document.createElement("img");
        balao.src = "imagens/balao_azul_pequeno.png"

        document.getElementById('cenario').appendChild(balao)
    }
}