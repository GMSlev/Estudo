let valor1 = parseInt(prompt("Digite um valor inicial:"));
let valor2 = parseInt(prompt("Digite um valor final:"));

function contadorNumerico(inicio, fim){
    let soma = 0;
    let quantidade = 0; 
    let limite = 10;

    if(inicio > limite || fim > limite){
        alert("Valores inválidos! Digite novamente.");
        return;
    }
    
    if(inicio <= fim ){
        for(let i = inicio; i <= fim; i++){
            console.log(i);
            soma = soma + i;
            quantidade++;
                console.log("Soma:  "+ soma);
                console.log("Quantidade: "+ quantidade);
            }
        }else{
            for(let i = inicio; i > fim; i--){
                console.log(i);
                soma = soma + i;
                quantidade++;
                console.log("Soma: "+ soma);
                console.log("Quantidade: "+ quantidade);
            }
        }
    
}
contadorNumerico(valor1,valor2 );