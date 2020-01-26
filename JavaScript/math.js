const num1 = 100;
const num2 = 50;

let val;

// simple Math
val = num1 + num2;
val = num1 - num2;
val = num1 * num2;
val = num1 / num2;
val = num1 % num2;

val = 4 ** 2;

// Math Object
val = Math.PI;
val = Math.E;
val = Math.round(2.4);
val = Math.floor(2.4);
val = Math.ceil(2.4);

val = Math.sqrt(64);
val = Math.abs(-3);
val = Math.pow(8,3);

val = Math.min(2,33,4,1,55,6,3,-2);
val = Math.max(2,33,4,1,55,6,3,-2);

val = Math.random(); // 0 to 1(exclude)

val = Math.ceil(Math.random()*6);
// Math.floor
// 1,2,3,4,5,6
//0.000000000001 * 6 => 0.0000000006 ==> ceil ==>1
//0.999999999999 * 6 ==> 5.9999999999 ==> ceil =6
console.log(val);