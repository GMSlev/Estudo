function calcularValorParcelado(valorProduto, numParcelas, taxaJuros) {
    return (valorProduto / numParcelas) * (taxaJuros / 100) * numParcelas;
}

function calcularValorTotal(valorParcelado, acessorios, desconto) {
    return valorParcelado + acessorios - desconto;
}

const computador = 4800;
const parcelas = 8;
const juros = 12;
const acessorios = 1200 + 250 + 150; // monitor + teclado + mouse
const desconto = 300;

const valorComJuros = calcularValorParcelado(computador, parcelas, juros);
const total = calcularValorTotal(valorComJuros, acessorios, desconto);

console.log(`O valor total da compra é de R$ ${total.toFixed(2)}`);