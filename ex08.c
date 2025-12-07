const numbers = [];
let sum = 0;


for (let i = 0; i < 10; i++) {
  const num = Number(prompt("Enter number " + (i + 1) + ":"));
  numbers.push(num);
  sum += num;
}


const average = sum / numbers.length;


console.log("Numbers entered: " + numbers.join(", "));
console.log("Sum: " + sum);
console.log("Average: " + average);
