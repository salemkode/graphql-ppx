// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';


var Raw = { };

function parse(value) {
  return {
          defaultObjectValueOnScalar: value.defaultObjectValueOnScalar
        };
}

function serialize(value) {
  return {
          defaultObjectValueOnScalar: value.defaultObjectValueOnScalar
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
  query: "query   {\ndefaultObjectValueOnScalar(filter: {some: {json: \"value\"}}, arg: {field: \"otherValue\"})  \n}\n",
  parse: parse,
  serialize: serialize,
  makeVariables: makeVariables,
  makeDefaultVariables: makeDefaultVariables,
  Z__INTERNAL: Z__INTERNAL
};

exports.MyQuery = MyQuery;
/* No side effect */
