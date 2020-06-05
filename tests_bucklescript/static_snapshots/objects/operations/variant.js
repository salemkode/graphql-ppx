// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Js_exn = require("bs-platform/lib/js/js_exn.js");
var Js_json = require("bs-platform/lib/js/js_json.js");
var Caml_option = require("bs-platform/lib/js/caml_option.js");

var Raw = { };

function parse(value) {
  var value$1 = value.mutationForVariant;
  var value$2 = Js_json.decodeObject(value$1);
  var tmp;
  if (value$2 !== undefined) {
    var value$3 = Caml_option.valFromOption(value$2);
    var temp = value$3["baseType"];
    var match = Js_json.decodeNull(temp);
    if (match !== undefined) {
      var temp$1 = value$3["baseTypeList"];
      var match$1 = Js_json.decodeNull(temp$1);
      if (match$1 !== undefined) {
        var temp$2 = value$3["dog"];
        var match$2 = Js_json.decodeNull(temp$2);
        if (match$2 !== undefined) {
          var temp$3 = value$3["human"];
          var match$3 = Js_json.decodeNull(temp$3);
          if (match$3 !== undefined) {
            var temp$4 = value$3["dogOrHuman"];
            var match$4 = Js_json.decodeNull(temp$4);
            if (match$4 !== undefined) {
              tmp = Js_exn.raiseError("graphql_ppx: All fields on variant selection set on type VariantTestResult were null");
            } else {
              var typename = temp$4["__typename"];
              var tmp$1;
              switch (typename) {
                case "Dog" :
                    var value$4 = temp$4.barkVolume;
                    var value$5 = temp$4.name;
                    tmp$1 = /* `Dog */[
                      3406428,
                      {
                        name: value$5,
                        barkVolume: value$4
                      }
                    ];
                    break;
                case "Human" :
                    tmp$1 = /* `Human */[
                      -1031617139,
                      {
                        name: temp$4.name
                      }
                    ];
                    break;
                default:
                  tmp$1 = /* `FutureAddedValue */[
                    -31101740,
                    temp$4
                  ];
              }
              tmp = /* `DogOrHuman */[
                974247566,
                tmp$1
              ];
            }
          } else {
            tmp = /* `Human */[
              -1031617139,
              {
                name: temp$3.name
              }
            ];
          }
        } else {
          var value$6 = temp$2.barkVolume;
          var value$7 = temp$2.name;
          tmp = /* `Dog */[
            3406428,
            {
              name: value$7,
              barkVolume: value$6
            }
          ];
        }
      } else {
        tmp = /* `BaseTypeList */[
          -259847799,
          temp$1.map((function (value) {
                  return value;
                }))
        ];
      }
    } else {
      tmp = /* `BaseType */[
        -620191861,
        temp
      ];
    }
  } else {
    tmp = Js_exn.raiseError("graphql_ppx: Expected type VariantTestResult to be an object");
  }
  return {
          mutationForVariant: tmp
        };
}

function serialize(value) {
  value.mutationForVariant;
  return {
          mutationForVariant: null
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
  query: "mutation   {\nmutationForVariant  {\nbaseType  \nbaseTypeList  \ndog  {\nname  \nbarkVolume  \n}\n\nhuman  {\nname  \n}\n\ndogOrHuman  {\n__typename\n...on Dog   {\nname  \nbarkVolume  \n}\n\n...on Human   {\nname  \n}\n\n}\n\n}\n\n}\n",
  parse: parse,
  serialize: serialize,
  makeVariables: makeVariables,
  makeDefaultVariables: makeDefaultVariables,
  Z__INTERNAL: Z__INTERNAL
};

exports.MyQuery = MyQuery;
/* No side effect */
