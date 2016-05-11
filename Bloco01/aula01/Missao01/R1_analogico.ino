/*
A montagem inicial ficou assim
https://123d.circuits.io/circuits/1587059-the-unnamed-circuit/edit#breadboard
*/

//Segue o código

void setup() {
  // comunicação serial iniciada a 9600 bits por segundo
  Serial.begin(9600);
}

// faremos um loop afim de garantir a continuidade da medição
void loop() {
  // faremos a leitura analógica na porta 0:
  int sensorValue = analogRead(A0);  // o int indica que estamos utilizando valores inteiros
  /* sabemos que temos uma tensão de entrada em 5V 
  e a leitura analógica nos dá valores de 0 a 1023 para a tensão aferida.
  Portanto:          */
  float percent= 5.0*sensorValue/1023.0;   // assim, nosso percent nos dará um valor aproximado a tensão em questão
  // print out the value you read:
  Serial.println(sensorValue); // aqui imprimiremos no serial Monitor o valor mensurado
  delay(300); // estamos dando um intervalo de 300ms      
};
// Sempre lembre-se de abrir e fechar o código com {}
// Além de colocar o ";" ao fim de cada linha de comando
