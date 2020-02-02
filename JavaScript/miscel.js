let val;

const today = new Date();
let birthday = new Date('9-10-1982 11:25:00');
birthday = new Date('September 10 1981');
birthday = new Date('9/10/1981');
birthday = new Date(2019, 11, 31, 12, 54, 33, 999);
birthday = new Date(10000000000000);

val = today.getMonth() + 1;
val = today.getDate();
val = today.getDay() + 1;
val = today.getFullYear();
val = today.getHours();
val = today.getMinutes();
val = today.getSeconds();
val = today.getMilliseconds();
val = today.getTime();

birthday = new Date(2000,01,12,7,45);
totalMili = birthday.getTime();

SandeshMilli = val - totalMili;
SandeshDays = Math.round(SandeshMilli/(24*60*60*1000));


console.log(SandeshDays);
console.log(totalMili);
console.log(today);
console.log(birthday);
console.log(val);


if( SandeshDays > 7000)
{
    console.log('Old Man');
}else {
    console.log('Still Young')
}

// == data type math gardaina, !=
// === data type match  => !==
const id = 100;
if( id === '100')
{
    console.log('correct');
}
else
{
    console.log('incorrect');
}

//forEach