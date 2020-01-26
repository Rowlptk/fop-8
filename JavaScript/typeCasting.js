let val;

// Number to string
val = String(5555);
val = String(4+4);

// Bool to string
val = String(true);

// date to string
val = String(new Date());

// array to string
val = String([1,2,3,4]);

val = (5555).toString();


// String to Number
val = Number('5'); 
val = Number(true); 
val = Number(false); 
val = Number(null); 
val = Number('x-men'); 
// NaN ==> Not a Number
val = Number([1,2,3]);
val = Number('1.24');
val = Number('1 24');

val = parseInt('100.4567');
val = parseFloat('100.4567');


const val1 = String(5);
const val2 = 6;
const sum = Number(val1 + val2);

console.log('5'+6+8); //==> 514
console.log(6+8+'5'); //==>145

//console.log(sum);
//console.log(typeof sum);