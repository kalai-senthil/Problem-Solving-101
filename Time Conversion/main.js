"use strict";

const fs = require("fs");

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", function (inputStdin) {
  inputString += inputStdin;
});

process.stdin.on("end", function () {
  inputString = inputString.split("\n");

  main();
});

function readLine() {
  return inputString[currentLine++];
}

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

function timeConversion(s) {
  let [hr, mi, ssAM] = s.split(":");
  let ss = ssAM.slice(0, 2);
  let AMPM = ssAM.slice(2);
  hr = +hr;
  if (AMPM === "PM" && hr != 12) {
    hr += 12;
  } else if (AMPM === "AM" && hr == 12) {
    hr = 0;
  }
  hr = `${hr}`.padStart(2, 0);
  mi = `${mi}`.padStart(2, 0);
  return `${hr}:${mi}:${ss}`;
}

function main() {
  const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

  const s = readLine();

  const result = timeConversion(s);

  ws.write(result + "\n");

  ws.end();
}