let nome = "Gabriel";
let salarioBrutoo = 3500;
let horasExtrass = 8;
let valorHoraExtra = 35;
let vT = 180;
let planoDeSaudee = 250;


//1. Valor total das horas extras
let totalHorasExtras = horasExtrass * valorHoraExtra;

//2. Salário bruto com as horas extras
let salarioTotal = salarioBrutoo + totalHorasExtras;

//Total de descontos
let totalDescontos = vT + planoDeSaudee;

//4. Salário líquido
let salarioLiquidoo =  salarioTotal - totalDescontos;

//5. Percentual que os descontos representam do salário bruto com horas extras

let percentualDescontos = (totalDescontos /salarioTotal) * 100;

console.log("======ENTRADA DE DADOS=======");
console.log("Nome: " + nome);
console.log("Salário bruto: " + salarioBrutoo);
console.log("Horas extras: " + horasExtrass);
console.log("Valor da hora extra: " + valorHoraExtra);
console.log("Vale Transporte: " + vT);
console.log("Plano de saúde: " + planoDeSaudee);
pularLinha();
console.log("======SAÍDA DE DADOS=======");
console.log("Funcionário: " + nome);
console.log("Horas extras totais: " + totalHorasExtras + "h");
console.log("Salário bruto com horas extras: R$" + salarioTotal);
console.log("Total de descontos:R$ " + totalDescontos);
console.log("Salário líquido: R$" + salarioLiquidoo);
console.log("Percentual de descontos: " + percentualDescontos.toFixed(2) + "%");