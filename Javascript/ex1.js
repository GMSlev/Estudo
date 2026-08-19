        var pularLinha = function(){
            document.write("<br>" + "<br>");
        }
        var linhaSeparar = function (){
            document.write("<hr>");
        }
        var mostrar = function(frase){
            document.write("<big>" + frase + "</big>");
            pularLinha();
        }
/*
        let tanque = 40;
        let caminhoComGasolina = 480;
        let consulmoDeGasolina = caminhoComGasolina/tanque;
        document.write("O consulmo na gasolina é de " + consulmoDeGasolina +"km/L.");
        pularLinha();
        console.log("Funcionamento de funções: ok");
        let precoGasolina = 6.79;
        let precoPorKilometro = precoGasolina/tanque;
        document.write("O preço por quilômetro na gasolina é de " + precoPorKilometro.toFixed(2));
        linhaSeparar();

        console.log("Funcionamento de cálculo: ok");
        let tanque2 = 40;
        let caminhoComAlcool = 300;
        let consulmoDeAlcool = caminhoComAlcool/tanque2;
        document.write("O consulmo no álcool é de " + consulmoDeAlcool + "km/L.");
        pularLinha();

        mostrar("Oloco");
        let precoAlcool = 5.80;
        let precoPorKilometroNoAlcool = precoAlcool/tanque2;
        document.write("O preço por quilômetro no álcool é de " + precoPorKilometroNoAlcool.toFixed(2));



Exercício: Consumo e custo de uma viagem

Crie um programa que calcule o custo de uma viagem de carro.

O programa deverá receber:

Distância da viagem: 600 km
Capacidade do tanque: 45 litros
Preço da gasolina: R$ 6,79
Consumo do carro: 12 km/L

O programa deve calcular e mostrar:

Quantos litros de gasolina serão necessários para fazer a viagem.
Quanto a viagem vai custar em gasolina.
Qual será o custo da gasolina por quilômetro.
Quantas vezes será necessário abastecer, considerando que o tanque começa cheio.
Mostrar uma mensagem final com todos os resultados.

litrosNecessarios = ?
custoTotal = ?
custoPorKm = ?
*/

let destino = 600;
let capacidadeTanque = 45;
let precoGasolina = 6.79;
let consumoCarro = 12;

//Quantos litros de gasolina serão necessários para fazer a viagem?
let litrosNecessarios =  destino / consumoCarro;

//Quanto a viagem vai custar em gasolina?
let custoTotal = litrosNecessarios * precoGasolina;

//Qual será o custo da gasolina por quilômetro.
let custoPorKm = custoTotal / destino;

//Quantas vezes será necessário abastecer, considerando que o tanque começa cheio.
let abastecimentoNecessario =  litrosNecessarios /  capacidadeTanque; 

document.write("Serão necessários " + litrosNecessarios + "L para completar ao seu destino!");
pularLinha();
document.write("A viagem terá o custo de R$ " + custoTotal.toFixed(2));
pularLinha();
document.write("O custo da gasolina por quilômetro será de R$ " + custoPorKm.toFixed(2));
pularLinha();
document.write("Será necessário " + Math.ceil (abastecimentoNecessario) + " tanques para completar a viagem"); // Match.ceil é utilizado para arredondar para cima, enquanto o Math.round retorna apenas o número inteiro (ex: 1,11112 ----> Uso do Math.round--->1)
pularLinha();