let numbers = [];
let input;


while (true) {
  input = Number(prompt("Enter a number (-1 to stop):"));

  if (input === -1) {
    break;  
  }
  numbers.push(input);
}
let count = numbers.length;
let sum = numbers.reduce((a, b) => a + b, 0);
let average = count > 0 ? sum / count : 0;

console.log("Count of numbers entered: " + count);
console.log("Sum of numbers: " + sum);
console.log("Average of numbers: " + average);
