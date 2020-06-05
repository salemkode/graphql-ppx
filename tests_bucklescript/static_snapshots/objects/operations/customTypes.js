// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Js_json = require("bs-platform/lib/js/js_json.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");

function parse(json) {
  var match = Js_json.decodeString(json);
  if (match === undefined) {
    return /* Red */0;
  }
  switch (match) {
    case "blue" :
        return /* Blue */2;
    case "green" :
        return /* Green */1;
    case "red" :
        return /* Red */0;
    default:
      return /* Red */0;
  }
}

function serialize(color) {
  switch (color) {
    case /* Red */0 :
        return "red";
    case /* Green */1 :
        return "green";
    case /* Blue */2 :
        return "blue";
    
  }
}

var Color = {
  parse: parse,
  serialize: serialize
};

function parse$1(json) {
  var str = Js_json.decodeString(json);
  if (str !== undefined) {
    return new Date(str);
  } else {
    return new Date();
  }
}

function serialize$1(date) {
  return date.toISOString();
}

var DateTime = {
  parse: parse$1,
  serialize: serialize$1
};

var Raw = { };

function parse$2(value) {
  var value$1 = value.customFields;
  var value$2 = value$1.nullableColor;
  var nullableColor = !(value$2 == null) ? parse(value$2) : undefined;
  var value$3 = value$1.futureTime;
  var futureTime = !(value$3 == null) ? Caml_option.some(parse$1(value$3)) : undefined;
  var value$4 = value$1.favoriteColor;
  var favoriteColor = parse(value$4);
  var value$5 = value$1.currentTime;
  var currentTime = parse$1(value$5);
  return {
          customFields: {
            currentTime: currentTime,
            favoriteColor: favoriteColor,
            futureTime: futureTime,
            nullableColor: nullableColor
          }
        };
}

function serialize$2(value) {
  var value$1 = value.customFields;
  var value$2 = value$1.nullableColor;
  var nullableColor = value$2 !== undefined ? serialize(value$2) : null;
  var value$3 = value$1.futureTime;
  var futureTime = value$3 !== undefined ? Caml_option.valFromOption(value$3).toISOString() : null;
  var value$4 = value$1.favoriteColor;
  var favoriteColor = serialize(value$4);
  var value$5 = value$1.currentTime;
  var currentTime = value$5.toISOString();
  return {
          customFields: {
            currentTime: currentTime,
            favoriteColor: favoriteColor,
            futureTime: futureTime,
            nullableColor: nullableColor
          }
        };
}

function makeVariables(param) {
  
}

function makeDefaultVariables(param) {
  
}

var Z__INTERNAL = {
  graphql_module: 0
};

var MyQuery = {
  Raw: Raw,
  query: "query   {\ncustomFields  {\ncurrentTime  \nfavoriteColor  \nfutureTime  \nnullableColor  \n}\n\n}\n",
  parse: parse$2,
  serialize: serialize$2,
  makeVariables: makeVariables,
  makeDefaultVariables: makeDefaultVariables,
  Z__INTERNAL: Z__INTERNAL
};

exports.Color = Color;
exports.DateTime = DateTime;
exports.MyQuery = MyQuery;
/* No side effect */
