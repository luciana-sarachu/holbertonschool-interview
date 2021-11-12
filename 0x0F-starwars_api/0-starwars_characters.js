#!/usr/bin/node
const request = require('request');
const urlId = 'https://swapi-api.hbtn.io/api/films/' + process.argv[2] + '/?format=json';
request.get(urlId, function (response, body) {
  const film = (JSON.parse(body.body).characters);
  console.log(film);
});
