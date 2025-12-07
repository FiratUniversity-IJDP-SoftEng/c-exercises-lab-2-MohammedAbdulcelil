for (let row = 1; row <= 10; row++) {
  let line = "";
  
  for (let col = 1; col <= 10; col++) {
    line += (row * col).toString().padStart(4, " ");
  }

  console.log(line);
}
