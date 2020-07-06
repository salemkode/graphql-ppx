// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var GraphQL_PPX = require("../utilities/graphQL_PPX.js");

var Raw = { };

var query = "fragment ListFragment on Lists   {\nnullableOfNullable  \n}\n";

function parse(value) {
  var value$1 = value.nullableOfNullable;
  return {
          nullableOfNullable: !(value$1 == null) ? value$1.map((function (value) {
                    if (!(value == null)) {
                      return value;
                    }
                    
                  })) : undefined
        };
}

function verifyArgsAndParse(_ListFragment, value) {
  return parse(value);
}

function serialize(value) {
  var value$1 = value.nullableOfNullable;
  var nullableOfNullable = value$1 !== undefined ? value$1.map((function (value) {
            if (value !== undefined) {
              return value;
            } else {
              return null;
            }
          })) : null;
  return {
          nullableOfNullable: nullableOfNullable
        };
}

function verifyName(param) {
  
}

var Z__INTERNAL = {
  graphql: 0,
  graphql_module: 0
};

var ListFragment = {
  Raw: Raw,
  query: query,
  parse: parse,
  verifyArgsAndParse: verifyArgsAndParse,
  serialize: serialize,
  verifyName: verifyName,
  Z__INTERNAL: Z__INTERNAL
};

var Raw$1 = { };

var query$1 = "fragment Another on Lists   {\nnullableOfNullable  \n...ListFragment   \n}\nfragment ListFragment on Lists   {\nnullableOfNullable  \n}\n";

function parse$1(value) {
  var value$1 = value["nullableOfNullable"];
  return {
          nullableOfNullable: !(value$1 == null) ? value$1.map((function (value) {
                    if (!(value == null)) {
                      return value;
                    }
                    
                  })) : undefined,
          listFragment: parse(value)
        };
}

function verifyArgsAndParse$1(_Another, value) {
  return parse$1(value);
}

function serialize$1(value) {
  var value$1 = value.nullableOfNullable;
  return [serialize(value.listFragment)].reduce(GraphQL_PPX.deepMerge, {
              nullableOfNullable: value$1 !== undefined ? value$1.map((function (value) {
                        if (value !== undefined) {
                          return value;
                        } else {
                          return null;
                        }
                      })) : null
            });
}

function verifyName$1(param) {
  
}

var Z__INTERNAL$1 = {
  graphql: 0,
  graphql_module: 0
};

var Another = {
  Raw: Raw$1,
  query: query$1,
  parse: parse$1,
  verifyArgsAndParse: verifyArgsAndParse$1,
  serialize: serialize$1,
  verifyName: verifyName$1,
  Z__INTERNAL: Z__INTERNAL$1
};

exports.ListFragment = ListFragment;
exports.Another = Another;
/* No side effect */
