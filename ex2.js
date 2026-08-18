/*
Exercício 2 — Salário e descontos

Crie um programa que calcule o salário líquido de um funcionário.

O funcionário recebe:

Salário bruto: R$ 3.500,00
Vale-transporte: 6% do salário bruto
Plano de saúde: R$ 180,00
Horas extras: 8 horas
Valor da hora normal: R$ 20,00

O programa deve calcular:

Quanto o funcionário receberá de horas extras.
Quanto será descontado de vale-transporte.
Quanto será descontado no total.
Qual será o salário líquido.
*/


var salarioBruto = 3500;
var valeTransporte = 6;
var planoDeSaude = 180;
var horasExtras = 8;
var valorDaHoraNormal = 20;

//Quanto o funcionário receberá de horas extras.
var valorHorasExtras = horasExtras * valorDaHoraNormal;

//Quanto será descontado de vale-transporte.
var descontoValeTransporte = salarioBruto * valeTransporte/100;

//Quanto será descontado no total.
var descontosTotais = planoDeSaude + descontoValeTransporte;

//Qual será o salário líquido.
var salarioLiquido = salarioBruto - descontosTotais;


document.write("O funcionário irá receber R$" + valorHorasExtras.toFixed(2) + " de horas extras.")
pularLinha();

document.write("O valor de desconto do vale-transporte é de R$ " + descontoValeTransporte.toFixed(2))
pularLinha();

document.write("O desconto total será de R$ " + descontosTotais.toFixed(2));
pularLinha();

document.write("O salário líquido será de R$" + salarioLiquido.toFixed(2));

