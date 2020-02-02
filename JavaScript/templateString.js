const name = 'John';
const age = 31;
const job = 'Web Developer';
const city = 'Miami';

let html;

// without using template string
html = '<ul>' +
        '<li>Name : ' + name + '</li>' +
        '<li>Age : ' + age + '</li>' +
        '<li>Job : ' + job + '</li>' +
        '<li>City : ' + city + '</li>' +
        '</ul>';


function hello()
{
    return 'Hello';
}

// With template string
html = `
       <ul>
       <li> Name : ${name} </li>
       <li> Age : ${age} </li>
       <li> Job : ${job} </li>
       <li> City : ${city} </li>
       <li> ${2 + 5} </li>
       <li> ${hello()} </li>
       <li> ${age > 30 ? 'Over 30' : 'Under 30'} </li>
    </ul>
`
document.body.innerHTML = html;